#include "Bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void Bird::InData(ifstream &ifst) 
{
	ifst >> flying;
	if (flying != false && flying != true)
	{
		cout << "��������� ������ ��� ����� ������������ �����\n";
		system("pause");
		//exit(1);
	}
}
void Bird::Out(ofstream &ofst) 
{
	if (flying != false && flying != true)
	{
		cout << "��������� ������ ��� ������ ������������ �����\n";
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