#include "beast.h"
#include <iostream>
#include <fstream>
using namespace std;
void beast::In_data(ifstream &ifst)
{
	int food;
	ifst >> food;
	if (food < 1 || food > 3)
	{
		cout << "Произошла ошибка при вводе типа питания животного\n";
		system("pause");
		exit(1);
	}
	switch (food)
	{
	case 1:
		type = beast::food::herbal;
		break;
	case 2:
		type = beast::food::insects;
		break;
	case 3:
		type = beast::food::meat;
		break;
	default:
		break;
	}
}

void beast::Out(ofstream &ofst)
{
	if (type != beast::food::herbal && type != beast::food::insects && type != beast::food::meat)
	{
		cout << "Произошла ошибка при выводе типа питания животного\n";
		system("pause");
		exit(1);
	}
	ofst << "Это Зверь: Тип питания: ";
	switch (type)
	{
	case beast::food::herbal:
		ofst << "Травоядное ";
		break;
	case beast::food::insects:
		ofst << "Насекомоядное ";
		break;
	case beast::food::meat:
		ofst << "Хищник ";
		break;
	default:
		break;
	}
	Out_common(ofst);
}