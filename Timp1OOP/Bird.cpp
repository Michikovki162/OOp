#include "Bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void Bird::InData(ifstream &ifst) 
{
	ifst >> flying;
}
void Bird::Out(ofstream &ofst) 
{
	ofst << "��� �����: ��������� � ��������: ";
	if (flying == false)
	{
		ofst << "������������ ";
	}
	else
	{
		ofst << "���������� ";
	}
	OutCommon(ofst);
}
void Bird::MultiMethod(Animal * other, ofstream & ofst)
{
	other->MMbird(ofst);
}
void Bird::MMbird(ofstream & ofst)
{
	ofst << "����� � �����" << endl;
}
void Bird::MMfish(ofstream & ofst)
{
	ofst << "���� � �����" << endl;
}