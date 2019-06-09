#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
Animal* Animal::In(ifstream &ifst)
{
	Animal *s;
	int key;
	int length;
	ifst >> key;
	if (key == 1) 
	{
		s = new Fish;
	}
	else if (key == 2)
	{
		s = new Bird;
	}
	else if (key == 3)
	{
		s = new Beast;
	}
	else
		return 0;
	s->InData(ifst);
	ifst >> s->name;
	ifst >> s->age;
	return s;
}
void Animal::OutCommon(ofstream & ofst)
{
	ofst << "Название: " << name << endl;
	ofst << "Возраст: " << age << endl;
}
bool Animal::Compare(Animal & other)
{
	return namelength() < other.namelength();
}
void Animal::Out_only_Fish(ofstream & ofst)
{
	ofst << endl;
}