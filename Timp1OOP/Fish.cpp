#include "Fish.h"
#include <iostream>
#include <fstream>
using namespace std;
void Fish::InData(ifstream &ifst) 
{
	int mesto;
	ifst >> mesto;
	if (mesto < 1 || mesto > 4)
	{
		cout << "��������� ������ ��� ����� ����� ���������� ����\n";
		system("pause");
		exit(1);
	}
	switch (mesto)
	{
	case 1:
		type = Fish::place::river;
		break;
	case 2:
		type = Fish::place::lake;
		break;
	case 3:
		type = Fish::place::sea;
		break;
	case 4:
		type = Fish::place::ocean;
		break;
	default:
		break;
	}
}

void Fish::Out(ofstream &ofst) 
{
	if (type != Fish::place::river && type != Fish::place::lake && type != Fish::place::sea && Fish::place::ocean)
	{
		cout << "��������� ������ ��� ������ ����� ���������� ����\n";
		system("pause");
		exit(1);
	}
	ofst << "��� ����: ����� ��������: ";
	switch (type)
	{
	case Fish::place::river:
		ofst << "���� ";
		break;
	case Fish::place::lake:
		ofst << "����� ";
		break;
	case Fish::place::sea:
		ofst << "���� ";
		break;
	case Fish::place::ocean:
		ofst << "����� ";
		break;
	default:
			break;
	}

	OutCommon(ofst);
}
void Fish::Out_only_Fish(ofstream &ofst)
{
	if (type != Fish::place::river && type != Fish::place::lake && type != Fish::place::sea && Fish::place::ocean)
	{
		cout << "��������� ������ ��� ������ ����� ���������� ����\n";
		system("pause");
		exit(1);
	}
	Out(ofst);
}
void Fish::MultiMethod(Animal * other, ofstream & ofst)
{
	other->MMfish(ofst);
}
void Fish::MMbird(ofstream & ofst)
{
	ofst << "���� � �����" << endl;
}
void Fish::MMfish(ofstream & ofst)
{
	ofst << "���� � ����" << endl;
}
void Fish::MMbeast(ofstream & ofst)
{
	ofst << "���� � �����" << endl;
}