#include "Canine.h"

#include<iostream>
using namespace std;

Canine::Canine(string name,string type):Animal(name,type)
{
eat_=new Meat();
}

void Canine::Roam()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" trotted"<<endl;
}

Dog::Dog(string name):Canine(name,"Dog")
{

}
void Dog::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" barked"<<endl;
}


Wolf::Wolf(string name):Canine(name, "Wolf")
{

}

void Wolf::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" howled"<<endl;
}
