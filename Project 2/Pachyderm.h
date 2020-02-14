#ifndef _PACHYDERM_H_
#define _PACHYDERM_H_

#include "Animal.h"
/**
 * 
 * This is a subclass of Animal Class for Pachyderm Animal Family
 *
 */
class Pachyderm :public Animal
{
  public:
  /**
	 * A constructor to initialize Pachyderm's name
	 * @param name Name of the Pachyderm
     @param type - Class name of the object
	 */
    Pachyderm(string name, string type);
    /**
	 * Function which tell Pachyderm to walk
	 */
    void Roam();
};
/**
 * 
 * Class Hippo which is a subclass of Pachyderm Class
 *
 */

class Hippo: public Pachyderm 
{
  public:
  /**
	 * A constructor to initialize Hippo's name
	 * @param name Name of the Hippo
	 */
    Hippo(string name);
    /**
	 * A function to get Hippo make noise
	 */
    void MakeNoise();
    

};
/**
 * 
 * Class Rhino which is a subclass of Pachyderm Class
 *
 */
class Rhino :public Pachyderm
{
  public:
  /**
	 * A constructor to initialize Rhino's name
	 * @param name Name of the Rhino
	 */
    Rhino(string name);
    /**
	 * A function to get Rhino make noise
	 */
    void MakeNoise();
    
};

/**
 * 
 * Class Elephant which is a subclass of Pachyderm Class
 *
 */
class Elephant :public Pachyderm
{
  public:
  /**
	 * A constructor to initialize Elephant's name
	 * @param name Name of the Elephant
	 */
    Elephant(string name);
    /**
	 * A Function to get Elephant make noise
	 */
    void MakeNoise();
    
};
#endif