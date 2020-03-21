/*
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void main()
{
	fstream f;
	setlocale(LC_ALL, "Rus");
	float x, y;
	cout << "¬ведите число x" << endl;
	cin >> x;
	f.open("text4b.txt", ios::out);
	if (x>3)
	{
		y = (5 * x) - 10;
		f << y;
	}
	if (x == 1)
	{
		y = 1;
		f << y;
	}
	if (x < 3 && x!=1)
	{
		y = ((2 * fabs(x)) - 5);
		f << y;
	}
	f.close();
}
*/