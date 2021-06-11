#include"Square.h"
double Square(const double a, const double b, const double c) {
	if (a < 0 || b < 0 || c < 0)
		throw 1.0;
	double p = (a + b + c) / 2.;
	double result = p * (p - a) * (p - b) * (p - c);
	if (result < 0)
		throw 1.0;
	return sqrt(result);
}

double Square1(const double a, const double b, const double c)
{
	try {
		return  Square(a, b, c);
	}
	catch(double){
		throw 1;
	}
}

double Square2(const double a, const double b, const double c) {
	try {
		return Square(a, b, c);
	}
	catch (double) {
		throw invalid_argument{ "Невозможно вычислить площадь, стандартное исключение" };
	}
}
double Square3(const double a, const double b, const double c)
{
	try {
		return  Square(a, b, c);
	}
	catch (double) {
		throw MyException();
	}
}

double Square4(const double a, const double b, const double c)
{
	try {
		return  Square(a, b, c);
	}
	catch (double) {
		throw MyException2("Невозможно вычислить площадь, независимый класс с полями-параметрами функции");
	}
}

double Square5(const double a, const double b, const double c)
{
	try {
		return  Square(a, b, c);
	}
	catch (double) {
		throw MyException3("Невозможно вычислить площадь, класс наследник");
	}
}