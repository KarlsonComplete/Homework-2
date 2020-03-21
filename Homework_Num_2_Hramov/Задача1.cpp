/*
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Rus");

	fstream f;
	char a = '0';
	int count = 1, line;
	cout << "Введите колличество строк!\n";
	cin >> line;
	f.open("text.txt", ios::out);
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < count; j++)
			f << a;
		f << endl;
		count++;
	}
	f >> a;
	f.close();

}
*/
