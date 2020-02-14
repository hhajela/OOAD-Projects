#ifndef _EAT_H_
#define _EAT_H_

#include<string>
using namespace std;
/*
Abstract Class to implement strategy Pattern 
*/
class AbstractEat
{
public:
virtual void Eat(string name, string type)=0;
};
/*
Derived class of AbstractEat to implement Eating for Carnivores animals
*/
class Meat :public AbstractEat
{
  public:
  void Eat(string name, string type);

};

/*
Derived class of AbstractEat to implement Eating for Herbivores animals
*/
class Grass :public AbstractEat
{
  public:
  void Eat(string name, string type);
};

#endif