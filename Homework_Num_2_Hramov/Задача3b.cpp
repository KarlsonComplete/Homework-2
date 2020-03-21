/*
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void main()
{
	fstream f;
	setlocale(LC_ALL, "Rus");
	int num, i, x, y;
	double sum = 0;

	cout << "¬ведите число x" << endl;
	cin >> x;
	cout << "¬ведите предел" << endl;
	cin >> num;

	for  (i = 1; i < num; i++)
	{
		y = (1 / (x * 1));
		sum += y;
	}
	cout << endl;
	f.open("text3b.txt", ios::out);
	f << sum << " ";
	f.close();
}
*/