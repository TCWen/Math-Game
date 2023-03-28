using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace GamePlay
{
    public class MathPiece : MonoBehaviour
    {
        [SerializeField] private TMP_Text mathIcon;
        private UnityAction _OnPieceDespawned;
        private Coroutine _pieceLifeSpan;

        public void SetUpMathPieceDetails(string name, Vector2 pos, UnityAction action)
        {
            mathIcon.text = name;
            this.gameObject.name = name;
            this.gameObject.transform.position = pos;
            _OnPieceDespawned = action;
            _pieceLifeSpan = StartCoroutine(CountDown());
        }

        private IEnumerator CountDown()
        {
            yield return new WaitForSecondsRealtime(5);
            _OnPieceDespawned?.Invoke();
        }

        public void OnCollisionHappened()
        {
            if(_pieceLifeSpan != null)
            {
                StopCoroutine(_pieceLifeSpan);
            }

            _OnPieceDespawned?.Invoke();
        }
    }
}

