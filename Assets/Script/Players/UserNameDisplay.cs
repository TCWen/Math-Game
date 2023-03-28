using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace Players
{
    public class UserNameDisplay : MonoBehaviour
    {
        [SerializeField] private PhotonView view;
        [SerializeField] private TMP_Text username;
        // Start is called before the first frame update
        void Start()
        {
            username.text = view.Owner.NickName;
        }


    }
}

