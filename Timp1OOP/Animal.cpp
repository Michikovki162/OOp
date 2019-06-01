#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
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
	else
		return 0;
	s->InData(ifst);
	ifst >> s->name;
	s->length = s->name.length();
	return s;
}
void Animal::OutCommon(ofstream & ofst)
{
	ofst << "Название: " << name << endl;
	ofst << "Длина названия: " << length << " символа(ов)" << endl;
}
bool Animal::Compare(Animal & other)
{
	return length > other.length;
}