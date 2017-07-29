using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Ship : AbstractShip, IMovement, IDamageable<int>, IKillable
{


    /** INSTANCE VARS */
    [Header("GENERAL_SHIP_DATA")]
    public EnemyScriptableObject defaultValues;
    public GameObject target;
    public GameObject explosion;
    public GameObject scoreText;    // Prefab for score_text
    public float moveFactor;
    public float speed = 1.0f;
    public float rotationSpeed = 90.0f;
    public int health = 100;
    public int enemyPoints = 100;
    public bool isSpeedBuffed = false;
    public float buffedSpeedFactor = 10.0f;
    public bool isMarked = false;

    public Vector2 initialPos;
    public IEnumerator hitFlickerRoutine;

    [Header("RENDERER/FLICKER_DATA")]
    public Color startColor;
    public Renderer sprite;
    public float flickerTime = 0.05f;


    /** UNITY CALLBACKS */

    protected virtual void Start()
    {
        initialPos = new Vector2(transform.position.x, transform.position.y);   // Cache our initial position
        target = GameObject.FindGameObjectWithTag(Constants.PlayerTag);     // Get Player at runtime

        if (sprite == null)
        {
            sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
            startColor = sprite.material.color;
        }


        //Debug.Log ("SHIP START");
    }

    protected virtual void Update()
    {
        Move();
    }

    /** INTERFACE METHODS */

    public virtual void Move()
    {

        // Default move pattern is to turn and move towards player.
        Vector3 dist = target.transform.position - transform.position;      // Find vector difference between target and this
        dist.Normalize();                                                   // Get unit vector
        float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
        Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion

        if (!isSpeedBuffed)
        {
            transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime); // Rotate the enemy
            transform.position = Vector2.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);
        }
        else
        {
            transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, rotationSpeed * buffedSpeedFactor * Time.deltaTime); // Rotate the enemy
            transform.position = Vector2.MoveTowards(transform.position, target.transform.position, speed * buffedSpeedFactor * Time.deltaTime);
        }
    }

    public virtual void Damage(int damageTaken)
    {

        // Restart flicker animation
        if (hitFlickerRoutine == null)
        {
            //StopCoroutine(hitFlickerRoutine);
            hitFlickerRoutine = FlickerHit();
            StartCoroutine(hitFlickerRoutine);
        }

        health -= damageTaken;      // We lose health
        if (health <= 0)
        {
            Kill();
            //Debug.Log ("Killed via projectile weapon");
        }
    }

    // Flicker when hit
    protected virtual IEnumerator FlickerHit()
    {
        //Debug.Log("FLICKERING");
        if (sprite != null)
        {
            Color beforeFlickerColor = sprite.material.color;
            Color flickerColor = beforeFlickerColor;
            flickerColor.a = 0.45f;

            sprite.material.color = flickerColor;
            yield return new WaitForSeconds(flickerTime);
            sprite.material.color = beforeFlickerColor;

            hitFlickerRoutine = null;
        }
    }

    public virtual void Kill()
    {
        //Destroy (transform.gameObject);		// Destroy our gameobject
        //transform.gameObject.SetActive(false);	// "Destroy" our gameobject
        sprite.material.color = startColor;
        GameManager.Singleton.RecordEnemyKilled(enemyType); // REGISTER A KILL so we know if we can spawn more of this enemy. This should cover Missiles and Shurikens registering damage / kills
        GameManager.Singleton.UpdateScore(enemyPoints); // Add new score in GameManager
        UIManager.Singleton.UpdateScore();  // Update score in UI
        hitFlickerRoutine = null;

        GameObject scoreTextInstance = Instantiate(scoreText, transform.position, Quaternion.identity);
        scoreTextInstance.GetComponent<ScoreText>().OnObjectReuse(gameObject);  // Pass ourselves in as a target position

        DestroyForReuse();
        // Score updates
        //if (GameManager.Singleton.levelActive) {


        //Debug.Log("RANGED SHIP KILLED! Obtained: " + enemyPoints + "points!");
        //}
        //Instantiate(explosion, transform.position, transform.rotation);
    }


    /** HELPER METHODS */

    /*	protected virtual void Initialize() {
		
	}*/

    public void BuffSpeed()
    {
        isSpeedBuffed = true;
    }

    public void DebuffSpeed()
    {
        isSpeedBuffed = false;
    }





    /** PROPERTIES */

    public float Speed
    {
        get { return speed; }
        set { speed = value; }
    }

    public float RotationSpeed
    {
        get { return rotationSpeed; }
        set { rotationSpeed = value; }
    }

    public int Health
    {
        get { return health; }
        set { health = value; }
    }

    public int EnemyPoints
    {
        get { return enemyPoints; }
        set { enemyPoints = value; }
    }
}