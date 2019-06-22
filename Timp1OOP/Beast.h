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
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	Beast() {} // �������� ��� �������������.
	void MultiMethod(Animal *other, ofstream &ofst);
	void MMfish(ofstream &ofst);
	void MMbird(ofstream &ofst);
	void MMbeast(ofstream &ofst);
};
#endif
