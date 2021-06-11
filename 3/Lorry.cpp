#include "Lorry.h"
void Lorry::set_correct_carrying(const double carrying)
{
	if (carrying >= MIN_CARRYING && carrying <= MAX_CARRYING)
	{
		this->carrying = carrying;
	}
	else
	{
		throw invalid_argument{ "Неверная грузоподъемность" };
	}
}
void Lorry ::set_carrying(const double carrying)
{
	set_correct_carrying(carrying);
}
Lorry::Lorry(const string& trademark, const unsigned int number_cylinders, const double power, const double carrying)
{
	this->trademark = trademark;
	set_correct_number_cylinders(number_cylinders);
	set_correct_power(power);
	set_correct_carrying(carrying);
}
double Lorry::get_carrying()const
{
	return carrying;
}