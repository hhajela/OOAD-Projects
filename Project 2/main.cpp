#include <iostream>
#include<vector>
using namespace std;

/*
Implemented strategy pattern by creating a separate class for eating (AbstractEat) which has two subclass Meat and Grass for both the behavior. There is a AbstractEat Object created in Animal Class to refer the correct object based on the animal type
The code is in Animal class files and Eat class files
.
*/


#include "Zookeeper.h"
#include "ZooAnnouncer.h"
int main() {
/**
	 * The Vector of animals name to create the zoo
	 */
vector<string> ani;

ani.push_back("Chloe");
ani.push_back("Chris");
ani.push_back("Dirk");
ani.push_back("Donald");
ani.push_back("Elen");
ani.push_back("Elvis");
ani.push_back("Helen");
ani.push_back("Helm");
ani.push_back("Liam");
ani.push_back("Liana");
ani.push_back("William");
ani.push_back("Willis");
ani.push_back("Ringo");
ani.push_back("Richard");
ani.push_back("Tyler");
ani.push_back("Tim");


	/**
	 * Initialize the zoo Object and add animals
	 */
Zookeeper zoo(ani);
ZooAnnouncer announcer(&zoo);
/**
	 * To execute the tasks.
	 */
zoo.CarryOutTask();
return 0;
}