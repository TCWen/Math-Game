using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace Server
{
    public class ServerConnector : MonoBehaviourPunCallbacks
    {
        public GameObject loadingPanel;
        public GameObject lobbyPanel;

        private void Start()
        {
            PhotonNetwork.ConnectUsingSettings();
        }

        public override void OnConnectedToMaster()
        {
            PhotonNetwork.JoinLobby();
        }

        public override void OnJoinedLobby()
        {
            loadingPanel.SetActive(false);
            lobbyPanel.SetActive(true);
        }
    }
}

