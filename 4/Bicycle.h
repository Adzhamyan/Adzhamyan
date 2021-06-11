#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
private:
	const int MAX_PASSANGERS_BICYCLE = 1;
	/**
	 \brief	функция принимает количество пассажиров
	 */
	void set_number_of_passengers(const int number_of_passengers) override;
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Bicycle(const double average_speed, const string& model, const int number_of_passengers, const double distance);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Bicycle() override = default;
	/**
	 \brief	функция принимает новое расстояние
	 */
	void set_new_distance(double distance) override;
};