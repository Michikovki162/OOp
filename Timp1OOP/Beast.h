#ifndef Beast_H
#define Beast_H
#include <fstream>
#include "Container.h"
class beast : public animal
{
	enum food
	{
		herbal,
		insects,
		meat
	}type;

public:
	void In_data(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	beast() {} // создание без инициализации.
};
#endif
