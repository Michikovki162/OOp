#ifndef Container_H
#define Container_H
#include <fstream>
#include "Animal.h"
using namespace std;
class container
{
private:
	class Node 
	{
	public:
		Node();
		Node* Next;
		Node* Prev;
		Animal* data;
		void Processsort(Node* &Top);
		void castl();
	};
	Node* Top;
	int count;
public:
	void In(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	void Clear(); // очистка контейнера от фигур
	void Out_only_Fish(ofstream &ofst);
	container(); // инициализация контейнера
	void Sort();
	~container() { Clear(); }
};

#endif //Container_H
