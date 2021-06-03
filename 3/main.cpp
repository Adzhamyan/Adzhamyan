#include "Lorry.h"
#include "Car.h"
#include<iostream>
#include <string>
using namespace std;

int main()
{
	Car a("Audi", 5, 100);
	cout << a.get_number_cylinders() << endl;
	cout << a.get_trademark() << endl;
	Lorry b("LOR", 3,100,5000);
	cout << b.get_carrying() << endl;
}