#include "bird.h"
#include <iostream>
#include <fstream>
using namespace std;
void bird::In_data(ifstream &ifst)
{
	ifst >> flying;
	if (flying != false && flying != true)
	{
		cout << "��������� ������ ��� ����� ������������ �����\n";
		system("pause");
		exit(1);
	}
}
void bird::Out(ofstream &ofst) 
{
	if (flying != false && flying != true)
	{
		cout << "��������� ������ ��� ������ ������������ �����\n";
		system("pause");
		exit(1);
	}
	ofst << "��� �����: ��������� � ��������: ";
	if (flying == false)
	{
		ofst << "������������ ";
	}
	else
	{
		ofst << "���������� ";
	}
	Out_common(ofst);
}