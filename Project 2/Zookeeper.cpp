#include<iostream>
using namespace std;

#include "Zookeeper.h"
#include "ZooAnnouncer.h"
#include "Feline.h"
#include "Canine.h"
#include "Pachyderm.h"

//register observer with subject
void Subject::RegisterObserver(Observer * o)
{
  observers_.push_back(o);
}

//update the observers
void Subject::NotifyObservers()
{
  for(auto o : observers_)
  {
    o->Update();
  }
}

//remove observer
void Subject::RemoveObserver(Observer * o)
{
  observers_.erase(std::remove(observers_.begin(), observers_.end(),o), observers_.end());
}

Zookeeper::Zookeeper(vector<string> animals)
{
    for(int i=0;i<animals.size();i++)
    {
      switch(animals[i][0])
      {
        case 'C':animal_list_.push_back(new Cat(animals[i]));
                break;
        case 'D':animal_list_.push_back(new Dog(animals[i]));
                break;
        case 'E':animal_list_.push_back(new Elephant(animals[i]));
                break;
        case 'T':animal_list_.push_back(new Tiger(animals[i]));
                break;
        case 'W':animal_list_.push_back(new Wolf(animals[i]));
                break;
        case 'L':animal_list_.push_back(new Lion(animals[i]));
                break;
        case 'H':animal_list_.push_back(new Hippo(animals[i]));
                break;
        case 'R':animal_list_.push_back(new Rhino(animals[i]));
                break;

      }
    }
}
void Zookeeper::Feed()
{
cout<<"FEEDING THE ANIMALS"<<endl;

for(int i=0;i<animal_list_.size();i++)
{
  animal_list_[i]->StartEat();
}
}
void Zookeeper::RollCall()
{
  cout<<"ROLL CALL THE ANIMALS"<<endl;

  for(int i=0;i<animal_list_.size();i++)
  {
    animal_list_[i]->Roam();
  }
}




void Zookeeper::WakeUp()
{
  cout<<"WAKING UP THE ANIMALS"<<endl;

  for(int i=0;i<animal_list_.size();i++)
  {
    animal_list_[i]->WakeUp();
  }
}

void Zookeeper::ShutDown()
{
  cout<<"SHUTTING THE ZOO"<<endl;

  for(int i=0;i<animal_list_.size();i++)
  {
    animal_list_[i]->Sleep();
  }
}

void Zookeeper::Exercise()
{
  cout<<"ROLL CALL THE ANIMALS"<<endl;

  for(int i=0;i<animal_list_.size();i++)
  {
    animal_list_[i]->Roam();
  }
}

//change current task and notify observers
void Zookeeper::SetCurrentTask(ZooTasks task)
{
  current_task_ = task;
  NotifyObservers();
}

//observers can use this to get current task
ZooTasks Zookeeper::GetCurrentTask()
{
  return current_task_;
}

void Zookeeper::CarryOutTask()
{
    //before doing any task zookeeper notifies the announcer using the observer pattern
    
    SetCurrentTask(ZooTasks::WAKE_UP);
    WakeUp();
    cout<<endl;

    SetCurrentTask(ZooTasks::ROLL_CALL);
    RollCall();
    cout<<endl;

    SetCurrentTask(ZooTasks::FEED);
    Feed();
    cout<<endl;

    SetCurrentTask(ZooTasks::EXERCISE);
    Exercise();
    cout<<endl;

    SetCurrentTask(ZooTasks::SHUT_DOWN);
    ShutDown();
    cout<<endl;
}