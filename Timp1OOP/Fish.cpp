#include "Fish.h"
#include <iostream>
#include <fstream>
using namespace std;
void Fish::InData(ifstream &ifst) 
{
	int mesto;
	ifst >> mesto;
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