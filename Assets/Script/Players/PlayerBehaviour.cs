using GamePlay;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;

namespace Players
{
    public class PlayerBehaviour : MonoBehaviour
    {
        [SerializeField] private PhotonView view;
        private int playerScore = 0;
        private DataTable dt;
        private string wholeExp;
        private string exp = "+";
        private bool _onEffectAct = false;

        private void Start()
        {
            dt = new DataTable();
        }

        public void OnCollisionEnter2D(Collision2D collision)
        {
            GameObject colliObj = collision.gameObject;
            if (colliObj.tag == "Piece")
            {
                colliObj.GetComponent<MathPiece>().OnCollisionHappened();
                CollisionAction(colliObj);
            }
        }

        public string GetScore()
        {
            return playerScore.ToString();
        }

        public string GetExpression()
        {
            return exp;
        }

        public string GetNickname()
        {
            return view.Owner.NickName;
        }

        private void CollisionAction(GameObject obj)
        {
            if(obj.name == "-" || obj.name == "*" || obj.name == "/" || obj.name == "%")
            {
                if(!_onEffectAct)
                {
                    exp = obj.name;
                    StartCoroutine(ExpEffect());
                }
            }
            else
            {
                wholeExp = playerScore + exp + obj.name;
                var result = float.Parse(dt.Compute(wholeExp, "").ToString());
                if (result < 0)
                {
                    playerScore = 0;
                }
                else
                {
                    playerScore = (int)result;
                }
            }

        }

        private IEnumerator ExpEffect()
        {
            _onEffectAct = true;

            yield return new WaitForSecondsRealtime(10);

            _onEffectAct = false;
            exp = "+";
        }

        
    }
}

