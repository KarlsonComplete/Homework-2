/*
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	//№2
	fstream f;
	float h, x, y, eps;
	x = -1;
	eps = 0.001;
	cout << "Введите шаг" << endl;
	cin >> h;
	cout << "Шаг равен : "<< h <<endl;
	while (x<2)
	{
		if (fabs(x)<eps)
		{
			cout << "Деление на 0" << endl;
		}
		else {
			y = (-0.23 * (x * x)) + (x);
			cout << x << " " << y << endl;

		}
		x += h;
	}
	f.open("text1.txt", ios::out);
	f << y;
	f.close();
}*/