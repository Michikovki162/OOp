#ifndef Bird_H
#define Bird_H
#include <fstream>
#include "Animal.h"
using namespace std;
class Bird : public Animal 
{
	bool flying;

public:
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	Bird() {} // �������� ��� �������������.
	void MultiMethod(Animal *other, ofstream &ofst);
	void MMfish(ofstream &ofst);
	void MMbird(ofstream &ofst);
};
#endif
