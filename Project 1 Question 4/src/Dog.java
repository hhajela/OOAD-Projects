/**
 * 
 * Class Dog which is a subclass of Canine Class
 *
 */

public class Dog  extends Canine{

	/**
	 * A constructor to initialize Rhino's name
	 * @param name Name of the Dog
	 */
	public Dog(String name){
		super(name);
	}
	/**
	 * A method to get Dog make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" barked");
	}
	
}
