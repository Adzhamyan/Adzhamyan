#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 10.15;
	double b = 23.1;

	double c = 48.73;
	double d = 0.9;

	Complex first(a, b);
	Complex second(c, d);

	cout << first<<endl;
	cout << second<<endl<<endl;

	cout << "first = " <<first.get_conj() << endl;
	cout << "second = " << second.get_conj() << endl << endl;

	Complex sum = first + second;

	cout << "����� �����: " << sum << endl << endl;

	Complex difference_1 = first - second;
	Complex difference_2 = second - first;

	cout << "�������� ����� ������ � ������ = " << difference_1 << endl;
	cout << "�������� ����� ������ � ������ = " << difference_1 << endl << endl;

	Complex composition = first * second;

	cout << "������������ ������� � ������� = " << composition << endl << endl;

	Complex quotient_1 = first / second;
	Complex quotient_2 = second / first;

	cout << "������� ������� � ������� = " << quotient_1 << endl;
	cout << "������� ������� � ������� = " << quotient_2 << endl << endl;


	if (first.are_equal(second))
	{
		cout << "����� �����" << endl;
	}
	else
	{
		cout << "����� �� �����" << endl;
	}
}