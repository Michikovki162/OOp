#ifndef Fish_H
#define Fish_H
#include <fstream>
#include "Animal.h"
using namespace std;
class fish : public animal 
{
	enum place	
	{
		river,
		lake,
		sea,
		ocean
	}type;
	
public:
	void In_data(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Out_only_Fish(ofstream &ofst);
	fish() { ; } // �������� ��� �������������.
};
#endif
