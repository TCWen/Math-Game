using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Players;
using Photon.Realtime;

namespace UI
{
    public class LeaderBoard : MonoBehaviour
    {
        [SerializeField] private List<LeaderBoardItem> item;

        private bool _On = false;
   

        private void Update()
        {
            if (!_On)
            {
                StartCoroutine(leaderboardUpdate());
            }
            
        }

        

        private IEnumerator leaderboardUpdate()
        {
            _On = true;
            var views = UnityEngine.Object.FindObjectsOfType<PlayerBehaviour>();
            for(int i=0; i< views.Length; i++)
            {
                item[i].name.text = views[i].GetNickname();
                item[i].score.text = views[i].GetScore();
            }

            yield return new WaitForEndOfFrame();

            _On = false;
        }

        public void ResetLeaderBoard()
        {
            for(int i=0; i < item.Count; i++)
            {
                item[i].name.text = "";
                item[i].score.text = "";
            }
        }
    }
}

