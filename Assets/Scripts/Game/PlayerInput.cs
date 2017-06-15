using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInput : MonoBehaviour, InputComponent
{

    public float speed = 5.0f;

    public void UpdateInput(PlayerShip player)
    {

        Debug.Log("USING PLAYERINPUT");
        // Firing logic
        if (Input.GetButton("Fire1") && Time.time > player.nextFire)
        {
            player.Fire();
        }

        // Temp Burst Rush Fire logic
        if (Input.GetButton("D") && Time.time > player.nextFire)
        {
            //player.Fire ();

        }

        bool axisInput = GameManager.Singleton.axisInput;   // Check if we register hori/vert movement

        // Temp logic for player destruction
        if (GameManager.Singleton.playerHealth <= 0)
        {
            Instantiate(player.explosion, transform.position, transform.rotation);
            transform.gameObject.SetActive(false);
        }

        // Temp logic for player destruction
        if (GameManager.Singleton.playerHealth <= 0)
        {
            Instantiate(player.explosion, transform.position, transform.rotation);
            transform.gameObject.SetActive(false);
        }

        if (Input.GetKey(KeyCode.D))
        {
            player.transform.Rotate(new Vector3(0, 0, 110) * Time.deltaTime);
        }

        if (Input.GetKey(KeyCode.A))
        {
            player.transform.Rotate(new Vector3(0, 0, -110) * Time.deltaTime);
        }

        if (axisInput)
        {
            if (Input.GetKey(KeyCode.W))
            {
                player.transform.Translate(Vector2.up * Time.deltaTime * speed);
                //rb.AddForce(transform.up * speed);
            }

            if (Input.GetKey(KeyCode.S))
            {
                player.transform.Translate(Vector2.down * Time.deltaTime * speed);
                //rb.AddForce(-transform.up * speed);
            }
        }
    }

    public void DisableControls() { }
    // Overloaded alternatives
    public void DisableControls(float givenEndTime)
    {

    }

}
