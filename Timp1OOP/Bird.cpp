#include "Bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void Bird::InData(ifstream &ifst) 
{
	ifst >> flying;
}
void Bird::Out(ofstream &ofst) 
{
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
void Bird::MultiMethod(Animal * other, ofstream & ofst)
{
	other->MMbird(ofst);
}
void Bird::MMbird(ofstream & ofst)
{
	ofst << "Птица и птица" << endl;
}
void Bird::MMfish(ofstream & ofst)
{
	ofst << "Рыба и птица" << endl;
}