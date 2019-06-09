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
	void OutCommon(ofstream &ofst);
	bool Compare(Animal &other);
};
#endif
