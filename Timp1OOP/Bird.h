#ifndef Bird_H
#define Bird_H
#include <fstream>
#include "Animal.h"
using namespace std;
class Bird : public Animal 
{
	bool flying;

public:
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	Bird() { ; } // создание без инициализации.
	void MultiMethod(Animal *other, ofstream &ofst);
	void MMfish(ofstream &ofst);
	void MMbird(ofstream &ofst);
	void MMbeast(ofstream &ofst);
};
#endif
