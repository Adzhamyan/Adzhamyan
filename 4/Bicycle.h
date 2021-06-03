#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
private:
	/**
	 \brief	функция принимает количество пассажиров
	 */
	void set_number_of_passengers(int number_of_passengers) override;
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Bicycle(double average_speed, string& model, int number_of_passengers, double distance);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Bicycle() override = default;
	/**
	 \brief	функция принимает новое расстояние
	 */
	void set_new_distance(double distance) override;
};