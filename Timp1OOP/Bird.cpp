#include "Bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void Bird::InData(ifstream &ifst) 
{
	if (flying != false && flying != true)
	{
		cout << "��������� ������ ��� ����� ������������ �����";
		system("pause");
		exit(1);
	}
	ifst >> flying;
}
void Bird::Out(ofstream &ofst) 
{
	if (flying != false && flying != true)
	{
		cout << "��������� ������ ��� ������ ������������ �����";
		system("pause");
		exit(1);
	}
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