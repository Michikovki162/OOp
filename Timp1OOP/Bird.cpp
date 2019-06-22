#include "Bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void Bird::InData(ifstream &ifst) 
{
	if (flying != false && flying != true)
	{
		cout << "Произошла ошибка при вводе перелетности птицы";
		system("pause");
		exit(1);
	}
	ifst >> flying;
}
void Bird::Out(ofstream &ofst) 
{
	if (flying != false && flying != true)
	{
		cout << "Произошла ошибка при выводе перелетности птицы";
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