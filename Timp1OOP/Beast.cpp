#include "Beast.h"
#include <iostream>
#include <fstream>
using namespace std;
void Beast::InData(ifstream &ifst)
{
	int food;
	ifst >> food;
	if (food < 1 || food > 3)
	{
		cout << "Произошла ошибка при вводе типа питания животного";
		system("pause");
		exit(1);
	}
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
	if (type != Beast::food::herbal && type != Beast::food::insects && type != Beast::food::meat)
	{
		cout << "Произошла ошибка при выводе типа питания животного";
		system("pause");
		exit(1);
	}
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