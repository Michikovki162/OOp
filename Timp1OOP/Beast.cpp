#include "Beast.h"
#include <iostream>
#include <fstream>
using namespace std;
void Beast::InData(ifstream &ifst)
{
	int food;
	ifst >> food;
	switch (food)
	{
	case 1:
		type = Beast::food::herbal;
		break;
	case 2:
		type = Beast::food::insects;
		break;
	case 3:
		type = Beast::food::meat;
		break;
	default:
		break;
	}
}

void Beast::Out(ofstream &ofst)
{
	ofst << "Это Зверь: Тип питания: ";
	switch (type)
	{
	case Beast::food::herbal:
		ofst << "Травоядное ";
		break;
	case Beast::food::insects:
		ofst << "Насекомоядное ";
		break;
	case Beast::food::meat:
		ofst << "Хищник ";
		break;
	default:
		break;
	}

	OutCommon(ofst);
}