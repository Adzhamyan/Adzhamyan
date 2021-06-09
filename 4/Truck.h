#pragma once
#include "Car.h"
using namespace std;
class Truck : public Car
{
private:
	double const MIN_CARRYING = 0;
	double const MAX_CARRYING = 15000;
	const int MIN_PASSANGERS_TRUCK = 1;
	const int MAX_PASSANGERS_TRUCK = 3;
	double carrying;
	/**
	 \brief	Принимает грузоподъемность
	 */
	void set_carrying(const double carrying);
	/**
	 \brief	функция принимает количество пассажиров
	 */
	void set_number_of_passengers(const int number_of_passengers) override;
public:
	/**
	 \brief	Конструктор с параметрами
	*/
	explicit Truck(const double average_speed, const string& model, const int number_of_passengers, const double distance, const double fuel, const double carrying);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Truck() override = default;

	/**
	 \brief	Возвращает грузоподъемность
	 \returns carrying.
	 */
	double get_carrying()const;
};
