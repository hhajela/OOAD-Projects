/**
 * 
 * This is a subclass of Animal Class for Pachyderm Animal Family
 *
 */
public class Pachyderm extends Animal{

	
	/**
	 * A constructor to initialize Pachyderm's name
	 * @param name Name of the Pachyderm
	 */
	public Pachyderm(String name)
	{
		super(name);
	}
	/**
	 * Method which tell Pachyderm to walk
	 */
	public void roam()
	{
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" walked");
	}
	/**
	 * Method which tells Pachyderm to eat grass
	 */
	public void eat()
	{
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" ate grass");
	}
	
	
}
