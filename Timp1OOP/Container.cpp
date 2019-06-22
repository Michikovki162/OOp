#include "Container.h"
#include <iostream>
#include <fstream>
using namespace std;
container::Node::Node()
{
	this->Next = nullptr;
	this->Prev = nullptr;
	this->data = nullptr;
}

container::container()
{
	Top = nullptr;
	count = 0;
}
void container::Clear()
{
	Node* current = Top;
	for (int i = 1; i < count; i++)
	{
		current = current->Next;
		delete current->Prev;
	}
	delete current;
	count = 0;
}
void container::In(ifstream & ifst)
{
	int flag;
	while (!ifst.eof()) {
		if (count == 0)
		{
			Top = new Node;
			Top->Next = Top;
			Top->Prev = Top;
			if ((Top->data = Animal::In(ifst)) != 0)
				flag = 1;
			else
				flag = 0;

		}
		else
		{
			Node *current = Top;
			for (int j = 1; j < count; j++)
			{
				current = current->Next;
			}
			current->Next = new Node;
			if ((current->Next->data = Animal::In(ifst)) != 0)
			{
				Top->Prev = current->Next;
				current->Next->Prev = current;
				current->Next->Next = Top;
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		if (flag != 0)
			count++;
	}
}

void container::Out(ofstream & ofst)
{
	if (count != 0)
	{
		Sort();
	}
	Node* current = Top;
	ofst << " Container contains " << count
		<< " elements." << endl;
	for (int j = 0; j < count; j++) {
		ofst << j << ": ";
		current->data->Out(ofst);
		ofst << "Длина названия: " << current->data->namelength() << endl;
		current = current->Next;
	}
}
void container::Sort()
{
	Node* current;
	current = Top;
	Node* currentnext = current->Next;
	for (int i = 1; i < count; i++)
	{
		for (int j = 1; j < count; j++)
		{
			if (current->data->Compare(*current->Next->data))
			{
				current->Processsort(Top);
				current = current->Next;
			}
			else
				current = current->Next;
		}
		current = Top;
	}
}
void container::Node::Processsort(Node *& Top)
{
	Node* currentnext = this->Next;
	if (this == Top)
	{
		if (this->Next->Next == this)
		{
			Top = this->Next;
		}
		else
		{
			this->castl();
		}
	}
	else
	{
		if (this->Next->Next == this)
		{
			Top = this->Next;
		}
		else
		{
			this->castl();
		}
	}
}
void container::Node::castl()
{
	Node* currentnext = this->Next;
	Animal* q1 = this->data;
	Animal* q2 = currentnext->data;
	this->data = q2;
	currentnext->data = q1;
}
int Animal::namelength()
{
	int length = name.length();
	return length;
}
void container::Out_only_Fish(ofstream & ofst)
{
	ofst << "Только рыба" << endl;
	Node* current = Top;
	for (int i = 0; i < count; i++) 
	{
		ofst << i << ": ";
		current->data->Out_only_Fish(ofst);
		current = current->Next;
	}
}
void container::MultiMethod(ofstream & ofst)
{
	ofst << "\n Мультиметод" << endl;
	Node* current_i = Top;
	Node* current_j = current_i->Next;
	for (int i = 0; i < count; i++) 
	{
		for (int j = i + 1; j < count; j++) 
		{
			current_i->data->MultiMethod(current_j->data, ofst);
			current_i->data->Out(ofst);
			current_j->data->Out(ofst);
			current_j = current_j->Next;
		}
		current_i = current_i->Next;
		current_j = current_i->Next;
	}
}