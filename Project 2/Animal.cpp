#include "Animal.h"

#include<iostream>
using namespace std;

Animal::Animal(string name,string type)
{
  name_=name;
  type_=type;
}
void Animal::Sleep()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" slept"<<endl;
}

void Animal::WakeUp()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" woke up"<<endl;
}

void Animal::StartEat()
{
eat_->Eat(name_,type_);
}

void Animal::SetEat(AbstractEat *e)
{
  eat_=e;
}