#include "Container.h"
#include <iostream>
#include <fstream>
using namespace std;
container::node::node()
{
	this->next = nullptr;
	this->prev = nullptr;
	this->data = nullptr;
}

container::container()
{
	top = nullptr;
	count = 0;
}
void container::Clear()
{
	node* current = top;
	for (int i = 1; i < count; i++)
	{
		current = current->next;
		delete current->prev;
	}
	delete current;
	count = 0;
}
void container::In(ifstream & ifst)
{
	int flag;
	while (!ifst.eof())
	{
		if (count == 0)
		{
			top = new node;
			top->next = top;
			top->prev = top;
			if ((top->data = animal::In(ifst)) != 0)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		else
		{
			node *current = top;
			for (int j = 1; j < count; j++)
			{
				current = current->next;
			}
			current->next = new node;
			if ((current->next->data = animal::In(ifst)) != 0)
			{
				top->prev = current->next;
				current->next->prev = current;
				current->next->next = top;
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		if (flag != 0)
		{
			count++;
		}
	}
}

void container::Out(ofstream & ofst)
{
	if (count != 0)
	{
		Sort();
	}
	node* current = top;
	ofst << " Container contains " << count
		<< " elements." << endl;
	for (int j = 0; j < count; j++) 
	{
		ofst << j << ": ";
		current->data->Out(ofst);
		ofst << "Длина названия: " << current->data->Name_length() << endl;
		current = current->next;
	}
}
void container::Sort()
{
	node* current;
	current = top;
	node* currentnext = current->next;
	for (int i = 1; i < count; i++)
	{
		for (int j = 1; j < count; j++)
		{
			if (current->data->Compare(*current->next->data))
			{
				current->Process_sort(top);
				current = current->next;
			}
			else
			{
				current = current->next;
			}
		}
		current = top;
	}
}
void container::node::Process_sort(node *& top)
{
	node* currentnext = this->next;
	if (this == top)
	{
		if (this->next->next == this)
		{
			top = this->next;
		}
		else
		{
			this->Castl();
		}
	}
	else
	{
		if (this->next->next == this)
		{
			top = this->next;
		}
		else
		{
			this->Castl();
		}
	}
}
void container::node::Castl()
{
	node* currentnext = this->next;
	animal* q1 = this->data;
	animal* q2 = currentnext->data;
	this->data = q2;
	currentnext->data = q1;
}
int animal::Name_length()
{
	int length = name.length();
	return length;
}
void container::Out_only_Fish(ofstream & ofst)
{
	ofst << "Только рыба" << endl;
	node* current = top;
	for (int i = 0; i < count; i++) 
	{
		ofst << i << ": ";
		current->data->Out_only_Fish(ofst);
		current = current->next;
	}
}