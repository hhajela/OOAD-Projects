import java.util.*;

public class Question4 {

	public static void main(String[] args)
	{
	/**
	 * The array list of animals name to create the zoo
	 */
	ArrayList<String> ani = new ArrayList<String>();
	ani.add("Chloe");
	ani.add("Chris");
	ani.add("Dirk");
	ani.add("Donald");
	ani.add("Elen");
	ani.add("Elvis");
	ani.add("Helen");
	ani.add("Helm");
	ani.add("Liam");
	ani.add("Liana");
	ani.add("William");
	ani.add("Willis");
	ani.add("Ringo");
	ani.add("Richard");
	ani.add("Tyler");
	ani.add("Tim");
	
	/**
	 * Initialize the zoo Object
	 */
	
	Zookeeper zoo =new Zookeeper();
	
	/**
	 * Adding animals to Zoo
	 */
	zoo.addAnimals(ani);
	/**
	 * To execute the tasks.
	 */
	zoo.carryOutTask();
	
	}
}
