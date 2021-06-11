#include <iostream>
#include "Vehicle.h"
#include "Bicycle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string bicycle = "Ya", truck = "truck";
	Bicycle b(10, bicycle, 1, 100);
	cout << b.get_distance() << endl;;
	b.set_new_distance(500);
	cout << b.get_distance() << endl;
	Truck tr(100, truck, 2, 50, 100, 1000);
	cout << tr.get_fuel_consumption(20);
}