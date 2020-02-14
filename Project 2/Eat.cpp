#include "Eat.h"

#include<iostream>
using namespace std;

void Grass::Eat(string name, string type)
{
cout<<name<<"is "<<type<<endl;
cout<<name<<" ate grass"<<endl;
}

void Meat::Eat(string name, string type)
{
cout<<name<<" is "<<type<<endl;
cout<<name<<" ate Meat"<<endl;
}