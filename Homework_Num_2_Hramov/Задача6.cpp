/*
#include <iostream>
#include <fstream>
using namespace std;

long double fact(int N)
{
	if (N < 0) // если пользователь ввел отрицательное число
		return 0; // возвращаем ноль
	if (N == 0) // если пользователь ввел ноль,
		return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
	else // Во всех остальных случаях
		return N * fact(N - 1); // делаем рекурсию.
}

int main()
{
	fstream f;
	f.open("text6.txt", ios::out);
	int N;
	setlocale(0, ""); // Включаем кириллицу
	cout << "Введите число для вычисления факториала: ";
	cin >> N;
	f << "Факториал для числа " << N << " = " << fact(N) << endl << endl; // fact(N) - функция для вычисления факториала.
	return 0;
}
*/