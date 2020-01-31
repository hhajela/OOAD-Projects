
/**
 * 
 * Class Elephant which is a subclass of Pachyderm Class
 *
 */

public class Elephant extends Pachyderm{
	/**
	 * A constructor to initialize Elephant's name
	 * @param name Name of the Elephant
	 */
	public Elephant(String name){
		super(name);
	}
	/**
	 * A method to get Elephant make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" trumpeted");
	}
}
