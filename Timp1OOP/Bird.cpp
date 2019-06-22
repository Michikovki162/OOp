#include "bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void bird::In_data(ifstream &ifst)
{
	ifst >> flying;
	if (flying != false && flying != true)
	{
		cout << "Произошла ошибка при вводе перелетности птицы\n";
		system("pause");
		exit(1);
	}
}
void bird::Out(ofstream &ofst) 
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
	Out_common(ofst);
}