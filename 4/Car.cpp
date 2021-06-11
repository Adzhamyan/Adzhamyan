#include "Car.h"
using namespace std;
void Car::set_number_of_passengers(int number_of_passengers)
{
	if (number_of_passengers >= MIN_PASSANGERS_CAR && number_of_passengers <= MAX_PASSANGERS_CAR)
	{
		this->number_of_passengers = number_of_passengers;
	}
	else
	{
		throw invalid_argument("Passengers can be from 1 to 5");
	}
}
void Car::set_fuel(const double fuel)
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
Car::Car(const double average_speed, const string& model, const int number_of_passengers, const double distance, const double fuel)
{
	set_average_speed(average_speed);
	this->model = model;
	set_number_of_passengers(number_of_passengers);
	set_distance(distance);
	set_fuel(fuel);
}
double Car::get_fuel()const
{
	return fuel;
}
double Car::get_fuel_consumption(const double q)
{
	return q * distance / 100;
}
void Car::set_new_fuel(const double fuel)
{
	set_fuel(fuel);
}
void Car::set_new_distance(const double distance)
{
	set_distance(distance);
}