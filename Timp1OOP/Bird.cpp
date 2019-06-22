#include "Bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void Bird::InData(ifstream &ifst) 
{
	ifst >> flying;
	if (flying != false && flying != true)
	{
		cout << "Произошла ошибка при вводе перелетности птицы\n";
		system("pause");
		//exit(1);
	}
}
void Bird::Out(ofstream &ofst) 
{
	if (flying != false && flying != true)
	{
		cout << "Произошла ошибка при выводе перелетности птицы\n";
		system("pause");
		exit(1);
	}
	ofst << "Это птица: Отношение к перелету: ";
	if (flying == false)
	{
		ofst << "Неперелетная ";
	}
	else
	{
		ofst << "Перелетная ";
	}
	OutCommon(ofst);
}