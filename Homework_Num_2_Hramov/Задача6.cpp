/*
#include <iostream>
#include <fstream>
using namespace std;

long double fact(int N)
{
	if (N < 0) // ���� ������������ ���� ������������� �����
		return 0; // ���������� ����
	if (N == 0) // ���� ������������ ���� ����,
		return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
	else // �� ���� ��������� �������
		return N * fact(N - 1); // ������ ��������.
}

int main()
{
	fstream f;
	f.open("text6.txt", ios::out);
	int N;
	setlocale(0, ""); // �������� ���������
	cout << "������� ����� ��� ���������� ����������: ";
	cin >> N;
	f << "��������� ��� ����� " << N << " = " << fact(N) << endl << endl; // fact(N) - ������� ��� ���������� ����������.
	return 0;
}
*/