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
		ofst << "������������";
	}
	else
	{
		ofst << "����������";
	}
	OutCommon(ofst);
}