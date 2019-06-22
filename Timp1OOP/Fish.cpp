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
	ofst << "Это рыба: Место обитания: ";
	switch (type)
	{
	case Fish::place::river:
		ofst << "Река ";
		break;
	case Fish::place::lake:
		ofst << "Озеро ";
		break;
	case Fish::place::sea:
		ofst << "Море ";
		break;
	case Fish::place::ocean:
		ofst << "Океан ";
		break;
	default:
			break;
	}

	OutCommon(ofst);
}
void Fish::MultiMethod(Animal*other, ofstream & ofst)
{
	other->MMfish(ofst);
}
void Fish::MMbird(ofstream & ofst)
{
	ofst << "Птица и рыба" << endl;
}
void Fish::MMfish(ofstream & ofst)
{
	ofst << "Рыба и рыба" << endl;
}