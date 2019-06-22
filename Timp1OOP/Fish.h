#ifndef Fish_H
#define Fish_H
#include <fstream>
#include "Animal.h"
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
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Out_only_Fish(ofstream &ofst);
	void MultiMethod(Animal *other, ofstream &ofst);
	void MMfish(ofstream &ofst);
	void MMbird(ofstream &ofst);
	void MMbeast(ofstream &ofst);
	Fish() { ; } // �������� ��� �������������.
};
#endif
