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
	};
	Node* Top;
	int count;
public:
	void In(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Clear(); // ������� ���������� �� �����
	void Out_only_Fish(ofstream &ofst);
	container(); // ������������� ����������
	~container() { Clear(); }
};

#endif //Container_H
