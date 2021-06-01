#include"Square.h"
double Square(double a, double b, double c)
{
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	return sqrt(result);
}

double Square1(double a, double b, double c)
{
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	if (result < 0)
		throw 1;
	else
		return sqrt(result);
}

double Square2(double a, double b, double c) {
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	if (result < 0)
		throw invalid_argument{ "Невозможно взять корень от отрицательного числа, стандартное исключение" };
	else
		return sqrt(result);
}
double Square3(double a, double b, double c)
{
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	if (result < 0)
		throw MyException();
	else 
		return sqrt(result);
}

double Square4(double a, double b, double c)
{
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	if (result < 0)
		throw MyException2("Невозможно взять корень от отрицательного числа, независимый класс с полями-параметрами функции");
	else
		return sqrt(result);
}

double Square5(double a, double b, double c)
{
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	if (result < 0)
		throw MyException3("Невозможно взять корень от отрицательного числа, класс наследник");
	else
		return sqrt(result);
}