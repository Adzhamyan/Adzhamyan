#include "Car.h"
using namespace std;
void Car::set_number_of_passengers(int number_of_passengers)
{
	if (number_of_passengers > 0 && number_of_passengers <= 5)
	{
		this->number_of_passengers = number_of_passengers;
	}
	else
	{
		throw invalid_argument("Passengers can be from 1 to 5");
	}
}
void Car::set_fuel(double fuel)
{
	if (fuel > 0)
	{
		this->fuel = fuel;
	}
	else
	{
		throw invalid_argument("Fuel must be positive");
	}
}
Car::Car()
{
	average_speed = 0;
	model = "None";
	number_of_passengers = 1;
	fuel = 1;
}
Car::Car(double average_speed, string& model, int number_of_passengers, double distance, double fuel)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
	set_fuel(fuel);
}
double Car::get_fuel()
{
	return fuel;
}
double Car::get_fuel_consumption(double q)
{
	return q * distance / 100;
}
void Car::set_new_fuel(double fuel)
{
	set_fuel(fuel);
}
void Car::set_new_distance(double distance)
{
	set_distance(distance);
}