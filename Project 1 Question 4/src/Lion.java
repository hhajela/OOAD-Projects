/**
 * 
 * Class Lion which is a subclass of Feline Class
 *
 */


public class Lion extends Feline{
	
	/**
	 * A constructor to initialize Lion's name
	 * @param name Name of the Lion
	 */
	public Lion(String name)
	{
		super(name);
	}
	/**
	 * A method to get Lion make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" roared");
	}
}
