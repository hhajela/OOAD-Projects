/**
 * 
 * This is a subclass of Animal Class for Feline Animal Family
 *
 */
public class Feline extends Animal{

	/**
	 * A constructor to initialize Feline's name
	 * @param name Name of the Feline Animal
	 */
	public Feline(String name){
		super(name);
	}
	/**
	 * Method which tell Feline to run around
	 */
	public void roam()
	{
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" ran around");;
	}
	
}
