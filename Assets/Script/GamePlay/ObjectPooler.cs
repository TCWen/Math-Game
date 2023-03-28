using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace GamePlay
{
    public class ObjectPooler : MonoBehaviour
    {
        [SerializeField] private List<Pool> pools;
        [SerializeField] private PhotonView view;
        
        private Dictionary<string, Queue<GameObject>> _poolDic;
        private PieceDetails _pieceDetails;

        #region Singleton

        public static ObjectPooler Instance;

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
            }
            
        }

        private void OnDestroy()
        {
            if (Instance != null)
            {
                Instance = null;
            }
        }

        #endregion

        private void Start()
        {
            
             view.RPC("SetUpPools", RpcTarget.All);
         
        }

        [PunRPC]
        public void SetUpPools()
        {
            _poolDic = new Dictionary<string, Queue<GameObject>>();

            foreach (Pool pool in pools)
            {
                Queue<GameObject> poolObj = new Queue<GameObject>();

                for (int i = 0; i < pool.poolSize; i++)
                {
                    GameObject obj = Instantiate(pool.prefab, this.transform);

                    obj.SetActive(false);

                    poolObj.Enqueue(obj);
                }

                _poolDic.Add(pool.type, poolObj);
            }

        }

        public void GetSpawnFromPool(string tag, Vector2 position, string name)
        {
            if (!_poolDic.ContainsKey(tag))
            {
                Debug.LogError("This pool is not available");
                return;
            }

            //GameObject spawnedObj = _poolDic[tag].Dequeue();
            //spawnedObj.SetActive(true);

            //spawnedObj.GetComponent<MathPiece>().SetUpMathPieceDetails(name, position, () =>
            //{
            //    spawnedObj.SetActive(false);
            //    _poolDic[tag].Enqueue(spawnedObj);
            //});


            _pieceDetails = new PieceDetails()
            {
                content = name,
                pos = position,
                pooltag = tag
            };

            string piece = JsonUtility.ToJson(_pieceDetails);
            view.RPC("SyncGetSpawn", RpcTarget.All, piece);
        }

        [PunRPC]
        public void SyncGetSpawn(string piece)
        {
            _pieceDetails = JsonUtility.FromJson<PieceDetails>(piece);
            GameObject spawnedObj = _poolDic[_pieceDetails.pooltag].Dequeue();

            spawnedObj.SetActive(true);

            spawnedObj.GetComponent<MathPiece>().SetUpMathPieceDetails(_pieceDetails.content, _pieceDetails.pos, () =>
            {
                spawnedObj.SetActive(false);
                _poolDic[_pieceDetails.pooltag].Enqueue(spawnedObj);
            });
        }


    }

    
}

