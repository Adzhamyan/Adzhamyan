#include "Car.h"

void Car::set_correct_number_cylinders(unsigned int number_cylinders)
{
	if (number_cylinders > 0 && number_cylinders < 25)
	{
		this->number_cylinders = number_cylinders;
	}
	else
	{
		throw invalid_argument{ "Неверное количество цилиндров" };
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
		throw invalid_argument{ "Неверное количество цилиндров" };
	}
}
void Car::set_trademark(string& trademark)
{
	this->trademark = trademark;
}
void Car::set_number_cylinders(unsigned int number_cylinders)
{
	set_correct_number_cylinders(number_cylinders);
}
void Car::set_power(double power)
{
	set_correct_power(power);
}
Car::Car()
{
	trademark = "";
	number_cylinders = 1;
	power = 0;
}
Car::Car(string trademark, unsigned int number_cylinders, double power)
{
	this->trademark = trademark;
	set_correct_number_cylinders(number_cylinders);
	set_correct_power(power);
}
string Car::get_trademark()
{
	return trademark;
}
unsigned int Car::get_number_cylinders()
{
	return number_cylinders;
}
double Car::get_power()
{
	return power;
}