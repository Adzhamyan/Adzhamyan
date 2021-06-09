#include <iostream>
#include "Vehicle.h"
using namespace std;

void Vehicle::set_average_speed(const double average_speed)
{
	if (average_speed > 0)
	{
		this->average_speed = average_speed;
	}
	else
	{
		throw invalid_argument("The speed must be positive");
	}
}
void Vehicle::set_distance(const double distance)
{
	if (distance > 0)
	{
		this->distance = distance;
	}
	else
	{
		throw invalid_argument("Distance must be greater than zero");
	}
}
double Vehicle::get_travel_time()const
{
	return distance / average_speed;
}
double Vehicle::get_average_speed()const
{
	return average_speed;
}
double Vehicle::get_number_of_passengers()const
{
	return number_of_passengers;
}
double Vehicle::get_distance()const
{
	return distance;
}
string Vehicle::get_model()const
{
	return model;
}
Vehicle::~Vehicle() {};