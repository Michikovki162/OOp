#ifndef Animal_H
#define Animal_H
#include <fstream>
using namespace std;
class Animal
{
private:
	string name;
	int age;
public:
	static Animal* In(ifstream &ifst);
	int namelength();
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	virtual void Out_only_Fish(ofstream &ofst);
	void OutCommon(ofstream &ofst);
	bool Compare(Animal &other);
	virtual void MultiMethod(Animal *other, ofstream &ofst) = 0;
	virtual void MMfish(ofstream &ofst) = 0;
	virtual void MMbird(ofstream &ofst) = 0;
	virtual void MMbeast(ofstream &ofst) = 0;
};
#endif
