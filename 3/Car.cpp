#include "Car.h"

void Car::set_correct_number_cylinders(unsigned int number_cylinders)
{
	if (number_cylinders > MIN_CYLINDERS && number_cylinders <= MAX_CYLINDERS)
	{
		this->number_cylinders = number_cylinders;
	}
	else
	{
		throw invalid_argument{ "Incorrect number cylinders" };
	}
}
void Car::set_correct_power(double power)
{
	if (power > 0)
	{
		this->power = power;
	}
	else
	{
		throw invalid_argument{ "Incorrect power" };
	}
}
void Car::set_trademark(const string& trademark)
{
	this->trademark = trademark;
}
void Car::set_number_cylinders(const unsigned int number_cylinders)
{
	set_correct_number_cylinders(number_cylinders);
}
void Car::set_power(const double power)
{
	set_correct_power(power);
}
Car::Car()
{
	trademark = "";
	number_cylinders = 1;
	power = 0;
}
Car::Car(const string& trademark, const unsigned int number_cylinders, const double power)
{
	this->trademark = trademark;
	set_correct_number_cylinders(number_cylinders);
	set_correct_power(power);
}
string Car::get_trademark()const
{
	return trademark;
}
unsigned int Car::get_number_cylinders()const
{
	return number_cylinders;
}
double Car::get_power()const
{
	return power;
}