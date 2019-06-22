// Timp1OOP.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "Container.h"
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{

	setlocale(LC_ALL, "Russian");
	int a;
	if (argc != 3) 
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		system("pause");
		exit(1);
	}
	ifstream ifst(argv[1]);
	if (!ifst)
	{
		cout << "���� ����� �� ������!\n";
		system("pause");
		exit(1);
	}
	ofstream ofst(argv[2]);
	if (!ofst)
	{
		cout << "���� ������ �� ������!\n";
		system("pause");
		exit(1);
	}
	cout << "Start" << endl;
	container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;

	c.Out(ofst);
	c.MultiMethod(ofst);
	c.Clear();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	cout << "Stop" << endl;
	system("pause");
	cin >> a;
	return 0;
}

