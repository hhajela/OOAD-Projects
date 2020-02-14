#ifndef _ZOOKEEPER_H_
#define _ZOOKEEPER_H_

#include<vector>
#include "Animal.h"
using namespace std;

class Zookeeper
{
  protected:
  // Arraylist to contain all the animal object
  vector<Animal*> animal_list_;
  public:
  /*
  Constructor to initiate class member and create all the animal object based on first character
	 * of the animal name and add them to the arraylist
	 * @param z  Arraylist of animals'names
	 */
  Zookeeper(vector<string> animals);
  /**
	 * function to feed the animal
	*/
  void Feed();
  /**
	 * function to get the animal make noise
	 */
  void RollCall();
  /**
	 * function which tell animal to exercise
	 */
  void Exercise();
  /**
	 * function to wake up the animal
	 */
  void WakeUp();
  /**
	 * function which ask animal to sleep
	 */
  void ShutDown();
  /**
	 * function to execute the tasks
	 */
  void CarryOutTask();
        
};

#endif