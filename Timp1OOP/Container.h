#ifndef Container_H
#define Container_H
#include <fstream>
#include "Animal.h"
using namespace std;
class container
{
private:
	class node 
	{
	public:
		node();
		node* next;
		node* prev;
		animal* data;
		void Process_sort(node* &Top);
		void Castl();
	};
	node* top;
	int count;
public:
	void In(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Clear(); // ������� ���������� �� �����
	void Out_only_Fish(ofstream &ofst);
	container(); // ������������� ����������
	void Sort();
	~container() { Clear(); }
};

#endif //Container_H
