/**
 * 
 * Class Hippo which is a subclass of Pachyderm Class
 *
 */

public class Hippo extends Pachyderm{
	
	/**
	 * A constructor to initialize Hippo's name
	 * @param name Name of the Hippo
	 */
	public Hippo(String name){
		super(name);
	}
	/**
	 * A method to get Hippo make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" growled");
	}
}
