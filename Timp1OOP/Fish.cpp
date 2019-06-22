#include "fish.h"
#include <iostream>
#include <fstream>
using namespace std;
void fish::In_data(ifstream &ifst)
{
	int mesto;
	ifst >> mesto;
	if (mesto < 1 || mesto > 4)
	{
		cout << "Произошла ошибка при вводе места проживания рыбы\n";
		system("pause");
		exit(1);
	}
	switch (mesto)
	{
	case 1:
		type = fish::place::river;
		break;
	case 2:
		type = fish::place::lake;
		break;
	case 3:
		type = fish::place::sea;
		break;
	case 4:
		type = fish::place::ocean;
		break;
	default:
		break;
	}
}

void fish::Out(ofstream &ofst) 
{
	if (type != fish::place::river && type != fish::place::lake && type != fish::place::sea && fish::place::ocean)
	{
		cout << "Произошла ошибка при выводе места проживания рыбы\n";
		system("pause");
		exit(1);
	}
	ofst << "Это рыба: Место обитания: ";
	switch (type)
	{
	case fish::place::river:
		ofst << "Река ";
		break;
	case fish::place::lake:
		ofst << "Озеро ";
		break;
	case fish::place::sea:
		ofst << "Море ";
		break;
	case fish::place::ocean:
		ofst << "Океан ";
		break;
	default:
			break;
	}
	Out_common(ofst);
}
void fish::Out_only_Fish(ofstream &ofst)
{
	if (type != fish::place::river && type != fish::place::lake && type != fish::place::sea && fish::place::ocean)
	{
		cout << "Произошла ошибка при выводе места проживания рыбы\n";
		system("pause");
		exit(1);
	}
	Out(ofst);
}