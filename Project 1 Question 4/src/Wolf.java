/**
 * 
 * Wolf Class for wolf which extends Canine class
 *
 */
public class Wolf extends Canine{

	/**
	 * 
	 * Constructor to initialize wolf name
	 * @param name The name of the animal
	 */
	public Wolf(String name)
	{
		super(name);
	}
	
	/**
	 * Function to get the wolf make noise
	 */
	public void makeNoise() {
		System.out.println(this.name+" is a "+this.getClass().getName() );
		System.out.println(this.name+" howled");
	}

}
