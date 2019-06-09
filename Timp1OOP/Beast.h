#ifndef Beast_H
#define Beast_H
#include <fstream>
#include "Container.h"
class Beast : public Animal
{
	enum food
	{
		herbal,
		insects,
		meat
	}type;

public:
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	Beast() {} // создание без инициализации.
};
#endif
