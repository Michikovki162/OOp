#ifndef Animal_H
#define Animal_H
#include <fstream>
using namespace std;
class animal
{
private:
	string name;
	int age;
public:
	static animal* In(ifstream &ifst);
	int Name_length();
	virtual void In_data(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	virtual void Out_only_Fish(ofstream &ofst);
	void Out_common(ofstream &ofst);
	bool Compare(animal &other);
};
#endif
