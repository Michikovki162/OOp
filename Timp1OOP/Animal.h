#ifndef Animal_H
#define Animal_H
#include <fstream>
using namespace std;
class Animal
{
private:
	string name;
public:
	static Animal* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	void OutCommon(ofstream &ofst);
	virtual void MultiMethod(Animal *other, ofstream &ofst) = 0;
	virtual void MMfish(ofstream &ofst) = 0;
	virtual void MMbird(ofstream &ofst) = 0;
};
#endif
