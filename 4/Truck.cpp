#include "Truck.h"
using namespace std;
void Truck::set_number_of_passengers(int number_of_passengers)
{
	if (number_of_passengers > 0 && number_of_passengers <= 3)
	{
		this->number_of_passengers = number_of_passengers;
	}
	else
	{
		throw invalid_argument("Passengers can be from 1 to 3");
	}
}
void Truck::set_carrying(double carrying)
{
	if (carrying > MIN_CARRYING && carrying <= MAX_CARRYING)
	{
		this->carrying = carrying;
	}
	else
	{
		throw invalid_argument("Incorrect lifting capacity");
	}
}
Truck::Truck(double average_speed, string& model, int number_of_passengers, double distance, double fuel, double carrying)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
	set_fuel(fuel);
	set_carrying(carrying);
}
double Truck::get_carrying()
{
	return carrying;
}