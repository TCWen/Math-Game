using Photon.Pun;
using Players;
using System.Collections;
using System.Collections.Generic;
using UI;
using UnityEngine;

namespace Server
{
    public class SpawnPlayersInServer : MonoBehaviour
    {
        [SerializeField] private GameObject playerPrefab;
        [SerializeField] private UiManager uiManager;
        
        private float _minX = -6f;
        private float _maxX = 6f;
        private float _minY = -0.4f;
        private float _maxY = 0.4f;

        private void Start()
        {
            Vector2 randPos = new Vector2(Random.Range(_minX, _maxX), Random.Range(_minY, _maxY));
            var spawnPlayer = PhotonNetwork.Instantiate(playerPrefab.name, randPos, Quaternion.identity);

            uiManager.SetUpPlayerReference(spawnPlayer.GetComponent<PlayerBehaviour>());
        }

        
    }

}
