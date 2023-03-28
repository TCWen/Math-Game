using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using TMPro;


namespace Server
{
    public class ServerBehaviour : MonoBehaviourPunCallbacks
    {
        [SerializeField] private TMP_InputField createRoomInput;
        [SerializeField] private TMP_InputField joinRoomInput;
        [SerializeField] private TMP_InputField usernameInput;

        #region Room Create and Join
        public void CreateRoom()
        {
            if(createRoomInput==null || usernameInput == null)
            {
                Debug.Log("Missing username or room name");
                return;
            }
            PhotonNetwork.CreateRoom(createRoomInput.text);
        }

        public void JoinRoom()
        {
            if (joinRoomInput == null || usernameInput == null)
            {
                Debug.Log("Missing username or room name");
                return;
            }
            PhotonNetwork.JoinRoom(joinRoomInput.text);
        }

        public override void OnJoinedRoom()
        {
            PhotonNetwork.NickName = usernameInput.text;
            PhotonNetwork.LoadLevel("Gameplay");
        }

        #endregion
    }
}

