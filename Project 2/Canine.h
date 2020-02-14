#ifndef _CANINE_H_
#define _CANINE_H_

#include"Animal.h"

/**
 * 
 * This is a subclass of Animal Class for Canine Animal Family
 *
 */
class Canine :public Animal
{
  public:
    /**
	 * A constructor to initialize Canine's name
	 * @param name -  Name of the Canine
     @param type - Class name of the object
	 */

    Canine(string name,string type);
    /**
	 * Function which tell Canines to Trot
	 */
    void Roam();
};

/**
 * 
 * Class Wolf which is a subclass of Canine Class
 *
 */
class Wolf: public Canine
{
  public:
  /* A constructor to initialize Wolf's name
   @param name - Name of the Wolf
  */
  Wolf(string name);
/**
	 * A method to get Wolf make noise
	 */
  void MakeNoise();
};
/**
 * 
 * Class Dog which is a subclass of Canine Class
 *
 */
class Dog: public Canine
{
  public:
  /* A constructor to initialize Dog's name
   @param name - Name of the Dog
  */
  Dog(string name);
  /**
	 * A method to get Dog make noise
	 */
  void MakeNoise();
};

#endif