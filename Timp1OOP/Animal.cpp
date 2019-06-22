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
	{
		return 0;
	}
	s->InData(ifst);
	ifst >> s->name;
	if (s->name.length() == 0)
	{
		cout << "Произошла ошибка при вводе названия\n";
		system("pause");
		exit(1);
	}
	ifst >> s->age;
	if (s->age < 0)
	{
		cout << "Произошла ошибка при вводе возраста\n";
		system("pause");
		exit(1);
	}
	return s;
}
void Animal::OutCommon(ofstream & ofst)
{
	if (name.length() == 0)
	{
		cout << "Произошла ошибка при выводе названия\n";
		system("pause");
		exit(1);
	}
	if (age < 0)
	{
		cout << "Произошла ошибка при вводе возраста\n";
		system("pause");
		exit(1);
	}
	ofst << "Название: " << name << endl;
	ofst << "Возраст: " << age << endl;
}
bool Animal::Compare(Animal & other)
{
	if ((namelength() < other.namelength()) != true && (namelength() < other.namelength() != false))
	{
		cout << "Произошла ошибка при сравнении длины названий\n";
		system("pause");
		exit(1);
	}
	return namelength() < other.namelength();
}
void Animal::Out_only_Fish(ofstream & ofst)
{
	ofst << endl;
}