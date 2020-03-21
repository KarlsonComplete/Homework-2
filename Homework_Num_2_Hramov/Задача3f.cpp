/*
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void main()
{
	fstream f;
	setlocale(LC_ALL, "Rus");
	int num,i,x,y;
	double sum = 0;

	cout << "¬ведите число x" << endl;
	cin >> x;
	cout << "¬ведите предел" << endl;
	cin >> num;
	
	for (i = 1; i <= num; i++){

		if (i % 2 == 0 ){
			y = x * i;
			sum = sum - y;
		}
		else{
			y = x * 1;
			sum = sum + y;
	    }
	}
	f.open("text3f.txt", ios::out);
	f << sum << " ";
	f.close();
}
*/