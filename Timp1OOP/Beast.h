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
	void In_data(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	beast() {} // �������� ��� �������������.
};
#endif
