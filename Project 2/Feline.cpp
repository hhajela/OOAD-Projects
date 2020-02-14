#include "Feline.h"

#include<iostream>
#include<stdlib.h>
using namespace std;
Feline::Feline(string name,string type):Animal(name,type)
{
eat_=new Meat();
}

void Feline::Roam()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" ran around"<<endl;
}

Lion::Lion(string name):Feline(name,"Lion")
{
  
}

void Lion::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" roared"<<endl;
}

Tiger::Tiger(string name):Feline(name,"Tiger")
{

}
void Tiger::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" snarled"<<endl;
}

Cat::Cat(string name):Feline(name,"Cat")
{

}


void Cat::StartEat()
{
  RandomActivity();
}

void Cat::Roam()
{
  RandomActivity();
}

void Cat::WakeUp()
{
  RandomActivity();
}

void Cat::Sleep()
{
  RandomActivity();
}

void Cat::MakeNoise()
{
  RandomActivity();
}

void Cat::RandomActivity()
{
int rand_number = rand() % 5;

switch(rand_number)
{
  case 0:cout<<name_<<" is a "<<type_<<endl;
        cout<<name_<<" hissed\n"; 
        break;
  case 1:
      Animal::Sleep();
  break;
  case 2:
      Animal::WakeUp();
  break;
  case 3: 
      Feline::Roam();
  break;
  case 4: 
      Animal::StartEat();
  break;

}

}