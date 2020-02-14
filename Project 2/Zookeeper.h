#ifndef _ZOOKEEPER_H_
#define _ZOOKEEPER_H_

#include<vector>
#include <algorithm>
#include "Animal.h"
using namespace std;

enum ZooTasks
{
  FEED=0,
  ROLL_CALL,
  EXERCISE,
  WAKE_UP,
  SHUT_DOWN
};

class Observer;

class Subject
{
  public:

  virtual void RegisterObserver(Observer * o);

  virtual void NotifyObservers();

  virtual void RemoveObserver(Observer * o);

  private:

  vector<Observer *> observers_;

};

class Zookeeper : public Subject
{
  private:
  vector<Animal*> animal_list_;
  ZooTasks current_task_;

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
  void SetCurrentTask(ZooTasks task);
  ZooTasks GetCurrentTask();
        
};

#endif