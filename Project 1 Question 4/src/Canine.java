/**
 * 
 * This is a subclass of Animal Class for Canine Animal Family
 *
 */


public class Canine  extends Animal{
	
	/**
	 * A constructor to initialize Canine's name
	 * @param name Name of the Canine
	 */
	public Canine(String name)
	{
		super(name);
	}
	/**
	 * Method which tell Canines to Trot
	 */
	public void roam()
	{
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" trotted");
	}
	
	
}
