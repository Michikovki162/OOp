#ifndef Bird_H
#define Bird_H
#include <fstream>
#include "Animal.h"
using namespace std;
class bird : public animal 
{
	bool flying;

public:
	void In_data(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	bird() { ; } // �������� ��� �������������.
};
#endif
