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
	return s;
}
void Animal::OutCommon(ofstream & ofst)
{
	ofst << "Название: " << name << endl;
}