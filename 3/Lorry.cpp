#include "Lorry.h"
void Lorry::set_correct_carrying(double carrying)
{
	if (carrying >= MIN_CARRYING && carrying <= MAX_CARRYING)
	{
		this->carrying = carrying;
	}
	else
	{
		throw invalid_argument{ "�������� ����������������" };
	}
}
void Lorry ::set_carrying(double carrying)
{
	set_correct_carrying(carrying);
}
Lorry::Lorry(string trademark, unsigned int number_cylinders, double power, double carrying)
{
	this->trademark = trademark;
	set_correct_number_cylinders(number_cylinders);
	set_correct_power(power);
	set_correct_carrying(carrying);
}
double Lorry::get_carrying()
{
	return carrying;
}