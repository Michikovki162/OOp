#ifndef Bird_H
#define Bird_H
#include <fstream>
#include "Container.h"
using namespace std;
class Bird : public Animal 
{
	bool flying;

public:
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	Bird() {} // �������� ��� �������������.
};
#endif
