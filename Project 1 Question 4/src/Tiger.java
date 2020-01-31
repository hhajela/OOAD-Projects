/**
 * 
 * Class Tiger which is a subclass of Feline Class
 *
 */

public class Tiger extends Feline{

	/**
	 * A constructor to initialize Tiger's name
	 * @param name Name of the Tiger
	 */
	public Tiger(String name)
	{
		super(name);
	}
	/**
	 * A method to get Tiger make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" snarled");
	}
}
