using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GamePlay
{
    public class Spawner : MonoBehaviour
    {
        private int _spawnRate = 5;
        private int _numberOfSpawn = 3;
        private ObjectPooler _objectPooler;
        private float minX = -7;
        private float maxX = 7;
        private float minY = -4;
        private float maxY = 4;
        private bool _isOngoing = false;
        void Start()
        {
            _objectPooler = ObjectPooler.Instance;
        }

        private void Update()
        {
            if (!_isOngoing)
            {
                StartCoroutine(Spawn());
            }
            
            
        }

        private string GetRandomNumber(bool isSign)
        {
            if (isSign)
            {
                return GetRandomFormula(Random.Range(0, 4));
            }
            else
            {
                return Random.Range(1, 21).ToString();
            }
        }

        private string GetRandomFormula(int num)
        {
            switch (num)
            {
                case 0:
                    return "-";
                case 1:
                    return "*";
                case 2:
                    return "/";
                case 3:
                    return "%";
                default:
                    return null;
            }
        }

        private Vector2 GetRandomPos()
        {
            return new Vector2(Random.Range(minX, maxX), Random.Range(minY, maxY));
        }

        private IEnumerator Spawn()
        {
            if (_objectPooler == null)
            {
                Debug.LogError("Missing ObjectPooler Instance");
                yield return null;
            }

            _isOngoing = true;
            for(int i = 0; i < _numberOfSpawn; i++)
            {
                _objectPooler.GetSpawnFromPool("MathPc", GetRandomPos(), GetRandomNumber(i % 2 != 0 ? true : false));    
            }

            yield return new WaitForSecondsRealtime(_spawnRate);

            _isOngoing = false;
        }
    }
}

