#pragma once
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
protected:
	const int MIN_PASSANGERS_CAR = 1;
	const int MAX_PASSANGERS_CAR = 5;
	double fuel;
	/**
	 \brief	функция принимает количество топлива
	 */
	void set_fuel(const double fuel);
	/**
	 \brief	функция принимает количество пассажиров
	 */
	void set_number_of_passengers(const int number_of_passengers) override;
public:
	/**
	 \brief	Конструктор по умолчанию
	*/
	Car();
	/**
	 \brief	Конструктор с параметрами
	*/
	explicit Car(const double average_speed, const string& model, const int number_of_passengers, const double distance, const double fuel);
	/**
	 \brief	Деструктор по умолчанию
	*/
	~Car() override = default;
	/**
	 \brief	Возвращает количество топлива в литрах
	 \returns	fuel
	 */
	double get_fuel()const;
	/**
	 \brief	Устанавливает новое количество топлива
	 */
	void set_new_fuel(const double fuel);
	/**
	 \brief	Возвращает расход топлива на заданной дистанции при q - расход топлива на 100 км
	 \returns	q * distance / 100
	 */
	double get_fuel_consumption(const double q);
	/**
	 \brief	функция принимает новое расстояние
	 */
	void set_new_distance(const double distance) override;
};