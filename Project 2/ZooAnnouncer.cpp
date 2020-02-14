#include "Zookeeper.h"
#include "ZooAnnouncer.h"
#include <iostream>

using namespace std;

//register with subject on construction
ZooAnnouncer::ZooAnnouncer(Zookeeper * s) : keeper_(s) 
{
  keeper_->RegisterObserver(this);
}

//observer update method is overridden here, whenever zookeeper notifies us of task change
//make an announcement about the new task
void ZooAnnouncer::Update()
{
  ZooTasks task = keeper_->GetCurrentTask();

  cout << "Hi, this is the Zoo Announcer. ";
  switch (task)
  {
      case ZooTasks::FEED:
        cout << "The Zookeeper is about to feed the animals!" << endl;
      break;

      case ZooTasks::ROLL_CALL:
        cout << "The Zookeeper is taking the animals' roll call!" << endl;
      break;

      case ZooTasks::EXERCISE:
        cout << "The Zookeeper is about to exercise the animals!" << endl;
      break;

      case ZooTasks::WAKE_UP:
        cout << "The Zookeeper is about to wake up the animals!" << endl;
      break;

      //last task done for the day, unregister the announcer
      default:
      {
        cout << "The zookeeper is shutting the zoo down. Goodbye!" << endl;
        keeper_->RemoveObserver(this);
      }
      break;
  }
}