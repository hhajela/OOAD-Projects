/**
 * 
 * Class Rhino which is a subclass of Pachyderm Class
 *
 */

public class Rhino extends Pachyderm{
	
	/**
	 * A constructor to initialize Rhino's name
	 * @param name Name of the Rhino
	 */
	public Rhino(String name){
		super(name);
	}
	/**
	 * A method to get Rhino make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" bellowed");
	}
}