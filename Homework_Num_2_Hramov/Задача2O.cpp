/*
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	//№3
	fstream f;
	float h, x, y, eps;
	x = -1;
	eps = 0.001;
	cout << "Введите шаг" << endl;
	cin >> h;
	cout << "Шаг равен : " << h << endl;
	while (x < 2)
	{
		if (fabs(x) < eps)
		{
			cout << "Деление на 0" << endl;
		}
		else {
			y = sqrt(15+(4/x))+13*x+sin(3*x+13);
			cout << x << " " << y << endl;

		}
		x += h;
	}
	f.open("text2.txt", ios::out);
	f << y;
	f.close();
	
}*/