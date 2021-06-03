#pragma once
#include "Car.h"
using namespace std;
class Truck : public Car
{
private:
	double const MIN_CARRYING = 0;
	double const MAX_CARRYING = 15000;
	double carrying;
	/**
	 \brief	Принимает грузоподъемность
	 */
	void set_carrying(double carrying);
	/**
	 \brief	функция принимает количество пассажиров
	 */
	void set_number_of_passengers(int number_of_passengers) override;
public:
	/**
	 \brief	Конструктор с параметрами
	*/
	explicit Truck(double average_speed, string& model, int number_of_passengers, double distance, double fuel, double carrying);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Truck() override = default;

	/**
	 \brief	Возвращает грузоподъемность
	 \returns carrying.
	 */
	double get_carrying();
};
