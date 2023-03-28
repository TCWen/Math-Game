using Players;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Photon.Pun;

namespace UI
{
    public class UiManager : MonoBehaviourPunCallbacks
    {
        [SerializeField] private TMP_Text scoreText;
        [SerializeField] private TMP_Text expText;
        [SerializeField] private LeaderBoard leaderBoard;

        private PlayerBehaviour _ownerObj;
        private bool _done = false;

        private void Update()
        {
            if (_done)
            {
                SetUpUiDetails();
            }    
        }

        public void SetUpPlayerReference(PlayerBehaviour player)
        {
            _ownerObj = player;
            _done = true;
        }


        private void SetUpUiDetails()
        {
            scoreText.text = _ownerObj.GetScore();
            expText.text = _ownerObj.GetExpression();
        }

        public void LeftRoom()
        {
            PhotonNetwork.DestroyPlayerObjects(PhotonNetwork.LocalPlayer);
            leaderBoard.ResetLeaderBoard();
            PhotonNetwork.LeaveRoom();
        }

        public override void OnLeftRoom()
        {
            PhotonNetwork.LoadLevel("Lobby Scene");
        }
    }
}

