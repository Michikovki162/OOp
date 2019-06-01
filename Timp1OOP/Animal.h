#ifndef Animal_H
#define Animal_H
#include <fstream>
using namespace std;
class Animal
{
private:
	string name;
	int length;
public:
	static Animal* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0; // �����
	void OutCommon(ofstream &ofst);
	bool Compare(Animal &other);
};
#endif
