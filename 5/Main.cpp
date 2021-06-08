#include <iostream>
#include <windows.h>
#include"Square.h""
int main()
{
	SetConsoleOutputCP(1251);
	try
	{
		cout << "Площадь равняется " << Square(1, 2, 4) << endl;
	}
	catch (int) {
		cerr << "Невозможно взять корень от отрицательного числа, без спецификатора" << endl;
	}
	try
	{
		cout <<"Площадь равняется " << Square1(1, 2,4) << endl;
	}
	catch (int) {
		cerr <<"Невозможно взять корень от отрицательного числа, спецификатор throw" << endl ;
	}
	try
	{
		cout << "Площадь равняется " << Square2(1, 2, 4) << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl ;
	}

	try
	{
		cout << "Площадь равняется " << Square3(1, 2, 4) << endl;
	}
	catch (MyException) {
		cerr << "Невозможно взять корень от отрицательного числа, пустой класс" << endl ;
	}

	try
	{
		cout << "Площадь равняется " << Square4(1, 2, 4) << endl;
	}
	catch (MyException2 error) {
		cerr << error.message << endl;
	}

	try
	{
		cout << "Площадь равняется " << Square5(1, 2, 4) << endl;
	}
	catch (MyException3 error) {
		cerr << error.what() << endl;
	}
}
	