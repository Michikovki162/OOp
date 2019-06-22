#include "animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
animal* animal::In(ifstream &ifst)
{
	animal *s;
	int key;
	int length;
	ifst >> key;
	if (key == 1)
	{
		s = new fish;
	}
	else if (key == 2)
	{
		s = new bird;
	}
	else if (key == 3)
	{
		s = new beast;
	}
	else
	{
		return 0;
	}
	s->In_data(ifst);
	ifst >> s->name;
	if (s->name.length() == 0)
	{
		cout << "��������� ������ ��� ����� ��������\n";
		system("pause");
		exit(1);
	}
	ifst >> s->age;
	if (s->age < 0)
	{
		cout << "��������� ������ ��� ����� ��������\n";
		system("pause");
		exit(1);
	}
	return s;
}
void animal::Out_common(ofstream & ofst)
{
	if (name.length() == 0)
	{
		cout << "��������� ������ ��� ������ ��������\n";
		system("pause");
		exit(1);
	}
	if (age < 0)
	{
		cout << "��������� ������ ��� ����� ��������\n";
		system("pause");
		exit(1);
	}
	ofst << "��������: " << name << endl;
	ofst << "�������: " << age << endl;
}
bool animal::Compare(animal & other)
{
	if ((Name_length() < other.Name_length()) != true && (Name_length() < other.Name_length() != false))
	{
		cout << "��������� ������ ��� ��������� ����� ��������\n";
		system("pause");
		exit(1);
	}
	return Name_length() < other.Name_length();
}
void animal::Out_only_Fish(ofstream & ofst)
{
	ofst << endl;
}