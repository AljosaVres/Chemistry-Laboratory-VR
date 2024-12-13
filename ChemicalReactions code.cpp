using UnityEngine;

//Water, HCL reaction
public class CollisionSpawner1 : MonoBehaviour
{
    public GameObject productPrefab1;
    public Transform spawnPoint;

    private bool waterCollided = false;
    private bool hydrochloricAcidCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Water") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            waterCollided = true;
            Debug.Log("Water collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("HydrochloricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrochloricAcidCollided = true;
            Debug.Log("HydrochloricAcid collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (waterCollided && hydrochloricAcidCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("Water"))
            waterCollided = false;

        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrochloricAcidCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab1 != null && spawnPoint != null)
        {
            Instantiate(productPrefab1, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        waterCollided = false;
        hydrochloricAcidCollided = false;
    }
}

//Water, Mg reaction
public class CollisionSpawner2 : MonoBehaviour
{
    public GameObject productPrefab2;
    public Transform spawnPoint;

    private bool waterCollided = false;
    private bool magnesiumCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Water") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            waterCollided = true;
            Debug.Log("Water collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("Magnesium") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            magnesiumCollided = true;
            Debug.Log("Magnesium collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (waterCollided && magnesiumCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("Water"))
            waterCollided = false;

        if (collision.gameObject.CompareTag("Magnesium"))
            magnesiumCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab2 != null && spawnPoint != null)
        {
            Instantiate(productPrefab2, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        waterCollided = false;
        magnesiumCollided = false;
    }
}

//Water, NaHCO3 reaction
public class CollisionSpawner3 : MonoBehaviour
{
    public GameObject productPrefab3;
    public Transform spawnPoint;

    private bool waterCollided = false;
    private bool sodiumBicarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Water") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            waterCollided = true;
            Debug.Log("Water collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumBicarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumBicarbonateCollided = true;
            Debug.Log("Sodium Bicarbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (waterCollided && sodiumBicarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("Water"))
            waterCollided = false;

        if (collision.gameObject.CompareTag("SodiumBicarbonate"))
            sodiumBicarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab3 != null && spawnPoint != null)
        {
            Instantiate(productPrefab3, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        waterCollided = false;
        sodiumBicarbonateCollided = false;
    }
}



//Water, sodium hydroxide reaction
public class CollisionSpawner4 : MonoBehaviour
{
    public GameObject productPrefab4;
    public Transform spawnPoint;

    private bool waterCollided = false;
    private bool sodiumHydroxideCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Water") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            waterCollided = true;
            Debug.Log("Water collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumHydroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumHydroxideCollided = true;
            Debug.Log("Sodium Hydroxide collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (waterCollided && sodiumHydroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("Water"))
            waterCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            sodiumHydroxideCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab4 != null && spawnPoint != null)
        {
            Instantiate(productPrefab4, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        waterCollided = false;
        sodiumHydroxideCollided = false;
    }
}

//HCL, sodium hydroxide reaction
public class CollisionSpawner5 : MonoBehaviour
{
    public GameObject productPrefab5;
    public Transform spawnPoint;

    private bool hydrochloricAcidCollided = false;
    private bool sodiumHydroxideCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("HydrochloricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrochloricAcidCollided = true;
            Debug.Log("Hydrochloric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumHydroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumHydroxideCollided = true;
            Debug.Log("Sodium Hydroxide collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (hydrochloricAcidCollided && sodiumHydroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrochloricAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            sodiumHydroxideCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab5 != null && spawnPoint != null)
        {
            Instantiate(productPrefab5, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        hydrochloricAcidCollided = false;
        sodiumHydroxideCollided = false;
    }
}

//HCL, magnesium reaction
public class CollisionSpawner6 : MonoBehaviour
{
    public GameObject productPrefab6;
    public Transform spawnPoint;

    private bool hydrochloricAcidCollided = false;
    private bool magnesiumCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("HydrochloricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrochloricAcidCollided = true;
            Debug.Log("Hydrochloric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("Magnesium") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            magnesiumCollided = true;
            Debug.Log("magnesium collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (hydrochloricAcidCollided && magnesiumCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrochloricAcidCollided = false;

        if (collision.gameObject.CompareTag("Magnesium"))
            magnesiumCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab6 != null && spawnPoint != null)
        {
            Instantiate(productPrefab6, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        hydrochloricAcidCollided = false;
        magnesiumCollided = false;
    }
}

//HCL, sodium bicarbonate
public class CollisionSpawner7 : MonoBehaviour
{
    public GameObject productPrefab7;
    public Transform spawnPoint;

    private bool hydrochloricAcidCollided = false;
    private bool sodiumBicarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("HydrochloricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrochloricAcidCollided = true;
            Debug.Log("Hydrochloric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumBicarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumBicarbonateCollided = true;
            Debug.Log("Sodium Bicarbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (hydrochloricAcidCollided && sodiumBicarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrochloricAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumBicarbonate"))
            sodiumBicarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab7 != null && spawnPoint != null)
        {
            Instantiate(productPrefab7, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        hydrochloricAcidCollided = false;
        sodiumBicarbonateCollided = false;
    }
}

//HCL, peroxide reaction
public class CollisionSpawner8 : MonoBehaviour
{
    public GameObject productPrefab8;
    public Transform spawnPoint;

    private bool hydrochloricAcidCollided = false;
    private bool hydrogenPeroxideCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("HydrochloricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrochloricAcidCollided = true;
            Debug.Log("Hydrochloric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("HydrogenPeroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrogenPeroxideCollided = true;
            Debug.Log("Hydrogen Peroxide collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (hydrochloricAcidCollided && hydrogenPeroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrochloricAcidCollided = false;

        if (collision.gameObject.CompareTag("HydrogenPeroxide"))
            hydrogenPeroxideCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab8 != null && spawnPoint != null)
        {
            Instantiate(productPrefab8, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        hydrochloricAcidCollided = false;
        hydrogenPeroxideCollided = false;
    }
}

//HCL, calcium carbonate reaction
public class CollisionSpawner9 : MonoBehaviour
{
    public GameObject productPrefab9;
    public Transform spawnPoint;

    private bool hydrochloricAcidCollided = false;
    private bool calciumCarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("HydrochloricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrochloricAcidCollided = true;
            Debug.Log("Hydrochloric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("CalciumCarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            calciumCarbonateCollided = true;
            Debug.Log("Calcium Carbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (hydrochloricAcidCollided && calciumCarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrochloricAcidCollided = false;

        if (collision.gameObject.CompareTag("CalciumCarbonate"))
            calciumCarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab9 != null && spawnPoint != null)
        {
            Instantiate(productPrefab9, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        hydrochloricAcidCollided = false;
        calciumCarbonateCollided = false;
    }
}

//Hydrogen peroxide, magnesium reaction
public class CollisionSpawner10 : MonoBehaviour
{
    public GameObject productPrefab10;
    public Transform spawnPoint;

    private bool hydrogenPeroxideCollided = false;
    private bool magnesiumCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("HydrogenPeroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            hydrogenPeroxideCollided = true;
            Debug.Log("Hydrogen Peroxide collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("Magnesium") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            magnesiumCollided = true;
            Debug.Log("Magnesium collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (magnesiumCollided && hydrogenPeroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("HydrochloricAcid"))
            hydrogenPeroxideCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            magnesiumCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab10 != null && spawnPoint != null)
        {
            Instantiate(productPrefab10, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        hydrogenPeroxideCollided = false;
        magnesiumCollided = false;
    }
}

//Sodium chloride, H2SO4
public class CollisionSpawner11 : MonoBehaviour
{
    public GameObject productPrefab11;
    public Transform spawnPoint;

    private bool sodiumChlorideCollided = false;
    private bool sulphuricAcidCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SodiumChloride") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumChlorideCollided = true;
            Debug.Log("Sodium Chloride collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SulphuricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sulphuricAcidCollided = true;
            Debug.Log("Sulphuric Acid collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (sodiumChlorideCollided && sulphuricAcidCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("SodiumChloride"))
            sodiumChlorideCollided = false;

        if (collision.gameObject.CompareTag("SulphuricAcid"))
            sulphuricAcidCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab11 != null && spawnPoint != null)
        {
            Instantiate(productPrefab11, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        sulphuricAcidCollided = false;
        sodiumChlorideCollided = false;
    }
}

//Sodium hydroxide, CuSO4 reaction
public class CollisionSpawner12 : MonoBehaviour
{
    public GameObject productPrefab12;
    public Transform spawnPoint;

    private bool sodiumHydroxideCollided = false;
    private bool copperSulphateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SodiumHydroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumHydroxideCollided = true;
            Debug.Log("Sodium hydroxide collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("CopperSulphate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            copperSulphateCollided = true;
            Debug.Log("Copper sulphate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (copperSulphateCollided && sodiumHydroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("CopperSulphate"))
            copperSulphateCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            sodiumHydroxideCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab12 != null && spawnPoint != null)
        {
            Instantiate(productPrefab12, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        copperSulphateCollided = false;
        sodiumHydroxideCollided = false;
    }
}

//Sodium hydroxide, H2SO4
public class CollisionSpawner13 : MonoBehaviour
{
    public GameObject productPrefab13;
    public Transform spawnPoint;

    private bool sulphuricAcidCollided = false;
    private bool sodiumHydroxideCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SulphuricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sulphuricAcidCollided = true;
            Debug.Log("Sulphuric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumHydroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumHydroxideCollided = true;
            Debug.Log("Sodium Hydroxide collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (sulphuricAcidCollided && sodiumHydroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("SulphuricAcid"))
            sulphuricAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            sodiumHydroxideCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab13 != null && spawnPoint != null)
        {
            Instantiate(productPrefab13, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        sulphuricAcidCollided = false;
        sodiumHydroxideCollided = false;
    }
}

//Sodium hydroxide, acetic acid reaction
public class CollisionSpawner14 : MonoBehaviour
{
    public GameObject productPrefab; // Assign the CHCOONa prefab in the Inspector
    public Transform spawnPoint;    // Assign Plate3's Transform in the Inspector

    private bool aceticAcidCollided = false;
    private bool sodiumHydroxideCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        // Check for AceticAcid collision
        if (collision.gameObject.CompareTag("AceticAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            aceticAcidCollided = true;
            Debug.Log("AceticAcid collided with Plate1 or Plate2");
        }

        // Check for SodiumHydroxide collision
        if (collision.gameObject.CompareTag("SodiumHydroxide") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumHydroxideCollided = true;
            Debug.Log("SodiumHydroxide collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (aceticAcidCollided && sodiumHydroxideCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("AceticAcid"))
            aceticAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            sodiumHydroxideCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab != null && spawnPoint != null)
        {
            Instantiate(productPrefab, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        aceticAcidCollided = false;
        sodiumHydroxideCollided = false;
    }
}

//Magnesium, H2SO4 reaction
public class CollisionSpawner15 : MonoBehaviour
{
    public GameObject productPrefab15;
    public Transform spawnPoint;

    private bool magnesiumCollided = false;
    private bool sulphuricAcidCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SulphuricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sulphuricAcidCollided = true;
            Debug.Log("Sulphuric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("Magnesium") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            magnesiumCollided = true;
            Debug.Log("Magnesium collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (magnesiumCollided && sulphuricAcidCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("SulphuricAcid"))
            sulphuricAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumHydroxide"))
            magnesiumCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab15 != null && spawnPoint != null)
        {
            Instantiate(productPrefab15, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        sulphuricAcidCollided = false;
        magnesiumCollided = false;
    }
}

//CH3COOH, NaHCO3 reaction
public class CollisionSpawner16 : MonoBehaviour
{
    public GameObject productPrefab16;
    public Transform spawnPoint;

    private bool aceticAcidCollided = false;
    private bool sodiumBicarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("AceticAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            aceticAcidCollided = true;
            Debug.Log("Acetic acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumBicarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumBicarbonateCollided = true;
            Debug.Log("Sodium bicarbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (aceticAcidCollided && sodiumBicarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("AceticAcid"))
            aceticAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumBicarbonate"))
            sodiumBicarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab16 != null && spawnPoint != null)
        {
            Instantiate(productPrefab16, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        aceticAcidCollided = false;
        sodiumBicarbonateCollided = false;
    }
}

//CH3COOH, Calcium carboante reaction
public class CollisionSpawner17 : MonoBehaviour
{
    public GameObject productPrefab17;
    public Transform spawnPoint;

    private bool aceticAcidCollided = false;
    private bool calciumCarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("AceticAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            aceticAcidCollided = true;
            Debug.Log("Acetic acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("CalciumCarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            calciumCarbonateCollided = true;
            Debug.Log("Calcium carbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (aceticAcidCollided && calciumCarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("AceticAcid"))
            aceticAcidCollided = false;

        if (collision.gameObject.CompareTag("CalciumCarbonate"))
            calciumCarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab17 != null && spawnPoint != null)
        {
            Instantiate(productPrefab17, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        aceticAcidCollided = false;
        calciumCarbonateCollided = false;
    }
}

//H2SO4, Sodium bicarbonate reaction
public class CollisionSpawner18 : MonoBehaviour
{
    public GameObject productPrefab18;
    public Transform spawnPoint;

    private bool sulphuricAcidCollided = false;
    private bool sodiumBicarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SulphuricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sulphuricAcidCollided = true;
            Debug.Log("Sulphuric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("SodiumBicarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sodiumBicarbonateCollided = true;
            Debug.Log("Sodium Bicarbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (sulphuricAcidCollided && sodiumBicarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("SulphuricAcid"))
            sulphuricAcidCollided = false;

        if (collision.gameObject.CompareTag("SodiumBicarbonate"))
            sodiumBicarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab18 != null && spawnPoint != null)
        {
            Instantiate(productPrefab18, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        sulphuricAcidCollided = false;
        sodiumBicarbonateCollided = false;
    }
}

//H2SO4, Calcium carbonate
public class CollisionSpawner19 : MonoBehaviour
{
    public GameObject productPrefab19;
    public Transform spawnPoint;

    private bool sulphuricAcidCollided = false;
    private bool calciumCarbonateCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SulphuricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sulphuricAcidCollided = true;
            Debug.Log("Sulphuric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("CalciumCarbonate") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            calciumCarbonateCollided = true;
            Debug.Log("Calcium carbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (sulphuricAcidCollided && calciumCarbonateCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("SulphuricAcid"))
            sulphuricAcidCollided = false;

        if (collision.gameObject.CompareTag("CalciumCarbonate"))
            calciumCarbonateCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab19 != null && spawnPoint != null)
        {
            Instantiate(productPrefab19, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        sulphuricAcidCollided = false;
        calciumCarbonateCollided = false;
    }
}

//H2SO4, Ethanol reaction
public class CollisionSpawner20 : MonoBehaviour
{
    public GameObject productPrefab20;
    public Transform spawnPoint;

    private bool sulphuricAcidCollided = false;
    private bool ethanolCollided = false;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("SulphuricAcid") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            sulphuricAcidCollided = true;
            Debug.Log("Sulphuric Acid collided with Plate1 or Plate2");
        }

        if (collision.gameObject.CompareTag("Ethanol") &&
            (collision.gameObject.CompareTag("Plate1") || collision.gameObject.CompareTag("Plate2")))
        {
            ethanolCollided = true;
            Debug.Log("Ethanol Bicarbonate collided with Plate1 or Plate2");
        }

        // Check if both conditions are met and spawn the product
        if (sulphuricAcidCollided && ethanolCollided)
        {
            SpawnProduct();
            ResetCollisions(); // Reset the conditions
        }
    }

    void OnCollisionExit(Collision collision)
    {
        // Reset collisions on exit
        if (collision.gameObject.CompareTag("SulphuricAcid"))
            sulphuricAcidCollided = false;

        if (collision.gameObject.CompareTag("Ethanol"))
            ethanolCollided = false;
    }

    private void SpawnProduct()
    {
        if (productPrefab20 != null && spawnPoint != null)
        {
            Instantiate(productPrefab20, spawnPoint.position, Quaternion.identity);
            Debug.Log("Product spawned at Plate3 position.");
        }
        else
        {
            Debug.LogError("Product prefab or spawn point is not assigned.");
        }
    }

    private void ResetCollisions()
    {
        sulphuricAcidCollided = false;
        ethanolCollided = false;
    }
}



