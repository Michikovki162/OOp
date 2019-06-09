#ifndef Bird_H
#define Bird_H
#include <fstream>
#include "Container.h"
using namespace std;
class Bird : public Animal 
{
	bool flying;

public:
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	Bird() {} // создание без инициализации.
};
#endif
