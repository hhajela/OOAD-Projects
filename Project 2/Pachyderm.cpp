#include "Pachyderm.h"

#include<iostream>
using namespace std;

Pachyderm ::Pachyderm(string name, string type):Animal(name,type)
{
eat_ = new Grass();
}

void Pachyderm::Roam()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" walked\n";
}
Hippo:: Hippo(string name):Pachyderm(name,"Hippo")
{

}

void Hippo::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" growled\n";
}


Rhino::Rhino(string name):Pachyderm(name,"Rhino")
{
  
}

void Rhino::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" bellowed\n";
}

Elephant::Elephant(string name):Pachyderm(name,"Elephant")
{
  
}

void Elephant::MakeNoise()
{
  cout<<name_<<" is a "<<type_<<endl;
  cout<<name_<<" trumptted\n";
}