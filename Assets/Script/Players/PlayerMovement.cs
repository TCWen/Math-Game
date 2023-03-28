using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace Players
{
    public class PlayerMovement : MonoBehaviour
    {
        [SerializeField] private Rigidbody2D pencilAvatarRb;
        [SerializeField] private PhotonView view;

        private float _moveSpeed = 5f;
        private Vector2 _moveTowards;

        private void Update()
        {
            if (view.IsMine)
            {
                MovementInputs();
            }
            
        }

        private void FixedUpdate()
        {
            if (view.IsMine)
            {
                Movement();
            }
        }

        private void MovementInputs()
        {
            float moveX = Input.GetAxisRaw("Horizontal");
            float moveY = Input.GetAxisRaw("Vertical");

            _moveTowards = new Vector2(moveX, moveY).normalized;
        }

        private void Movement()
        {
            pencilAvatarRb.velocity = new Vector2(_moveTowards.x * _moveSpeed, _moveTowards.y * _moveSpeed);
        }
    }
}

