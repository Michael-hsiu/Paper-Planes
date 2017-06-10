
// The point is just to add some vars/methods that we forgot to include
// Ship.cs inherits from this
public abstract class AbstractShip : PoolObject {

	public EnemyType enemyType;
	public IMoveState moveState;
    public IFireState fireState;
}
