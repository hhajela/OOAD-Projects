/**
 * 
 * This is the main class Animal which will extended by other classes
 *
 */

public class Animal
{
	protected String name;
	
	/**
	 * Constructor to set the name of the Animal
	 * @param name - Name of the Animal
	 */
	public Animal(String name)
	{
		this.name = name;
	}
	
	/**
	 * Method which ask animal to sleep
	 */
	public void sleep()
	{
		System.out.println(this.name+" the "+this.getClass().getName() );
		System.out.println(this.name+" slept");
		
	}
	/**
	 * Method to get the animal eat
	*/
	public void eat()
	{
		System.out.println(this.name+" the "+this.getClass().getName() );
		System.out.println(this.name+" ate meat");
	}
	/**
	 * Method to wake up the animal
	 */
	public void wakeUp()
	{
		System.out.println(this.name+" the "+this.getClass().getName() );
		System.out.println(this.name+" woke up");
	}
	
	/**
	 * Method which tell animal to exercise
	 */
	
	public void roam()
	{
		System.out.println(this.name+" the "+this.getClass().getName() );
		System.out.println(this.name+" ran around");
	}
	
	/**
	 * Method to get the animal make noise
	 */
	public void makeNoise()
	{
		System.out.println(this.name+" the "+this.getClass().getName() );
		System.out.println(this.name+" making noises");
	}
	
}

