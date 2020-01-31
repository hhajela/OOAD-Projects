import java.util.*;

/**
 * The Zookeeper class is a helper which create object for all the animals 
 * and run different tasks on them.
 
 */

public class Zookeeper {

	/**
	 * Arraylist to contain all the animal object
	 */
	protected ArrayList<Animal> al;
	
	
	/**
	 * Constructor to initiate class member
	 */
	public Zookeeper()
	{
		al = new ArrayList<Animal>();
	}
	
	
	/**
	 * This method create all the animal object based on first character
	 * of the animal name and add them to the arraylist
	 * @param z  Arraylist of animals'names
	 */
	public void addAnimals(ArrayList<String> z)
	{
		
		for(int i=0;i<z.size();i++)
		{
			switch(z.get(i).charAt(0))
			{
			case 'C':al.add(new Cat(z.get(i)));
					break;
			case 'D':al.add(new Dog(z.get(i)));
					break;
			case 'E':al.add(new Elephant(z.get(i)));
					break;
			case 'L':al.add(new Lion(z.get(i)));
					break;
			case 'H':al.add(new Hippo(z.get(i)));
					break;
			case 'W':al.add(new Wolf(z.get(i)));
					break;
			case 'T':al.add(new Tiger(z.get(i)));
					break;
			case 'R':al.add(new Rhino(z.get(i)));
					break;
			
	
			}
		}
	}
	/**
	 * Method to wake up the animal
	 */
	public void wakeup()
	{
		System.out.println("WAKING UP THE ANIMALS");
		for(int i=0;i<al.size();i++)
		{
			al.get(i).wakeUp();
		}
		
	}
	
	/**
	 * Method to feed the animal
	*/
	public void feed()
	{
		System.out.println("FEEDING THE ANIMALS");
		for(int i=0;i<al.size();i++)
		{
			al.get(i).eat();
		}
		
	}
	
	/**
	 * Method which tell animal to exercise
	 */
	public void exercise()
	{
		System.out.println("EXERCISING THE ANIMALS");
		for(int i=0;i<al.size();i++)
		{
			al.get(i).roam();
		}
		
	}
	
	/**
	 * Method to get the animal make noise
	 */
	public void rollCall()
	{
		
		System.out.println("ROLL CALL THE ANIMALS");
		for(int i=0;i<al.size();i++)
		{
			al.get(i).makeNoise();
		}
	}
	
	/**
	 * Method which ask animal to sleep
	 */
	public void shutdown()
	{
		
		System.out.println("SHUTTING THE ZOO");
		for(int i=0;i<al.size();i++)
		{
			al.get(i).sleep();
		}
	}
	/**
	 * Method to execute the tasks
	 */
	public void carryOutTask()
	{
		this.wakeup();
		System.out.println("");
		this.rollCall();
		System.out.println("");
		this.feed();
		System.out.println("");
		this.exercise();
		System.out.println("");
		this.shutdown();
	}
}
