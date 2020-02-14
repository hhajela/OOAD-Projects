#ifndef _ANIMAL_H_
#define _ANIMAL_H_

/**
 * 
 * This is the header for main class Animal which will extended by other classes
 *
 */
#include<string.h>
#include "Eat.h"
class Animal
{
  
  protected:
  string name_;
  string type_;
  AbstractEat *eat_;

  public:
  /**
	 * Constructor to set the name of the Animal
	 * @param name - Name of the Animal
     @param type - Class name of the Animal
	 */
    Animal(string name_, string type_);
    /**
	 * Function which ask animal to sleep
	 */
    virtual void Sleep();
    /**
	 * Function to wake up the animal
	 */
    virtual void WakeUp();
    /**
	 * Function to get the animal eat which is using eat object to call the function
	*/
    virtual void StartEat();
    /**
	 * Function which tell animal to Roam around
	 */
    virtual void Roam();
    /**
	 * Function to get the animal make noise
	 */
    virtual void MakeNoise();
    

    /*
    Setter for EatBehaviour
    @param - Meat Class or Grass class
    */
    virtual void SetEat(AbstractEat* e);
    
  
};

#endif