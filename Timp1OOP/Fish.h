#ifndef Fish_H
#define Fish_H
#include <fstream>
#include "Container.h"
using namespace std;
class Fish : public Animal 
{
	enum place	
	{
		river,
		lake,
		sea,
		ocean
	}type;
	
public:
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	Fish() {} // создание без инициализации.
};
#endif
