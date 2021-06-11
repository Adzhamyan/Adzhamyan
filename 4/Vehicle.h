#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
	double average_speed;
	string model;
	int number_of_passengers;
	double distance;

	/**
	 \brief	Принимает среднюю скорость
	 */
	void set_average_speed(const double average_speed);
	/**
	 \brief	Виртуальная функция принимает количество пассажиров
	 */
	virtual void set_number_of_passengers(const int number_of_passengers) = 0;
	/**
	 \brief	Принимает дистанцию в километрах
	 */
	void set_distance(const double distance);
public:
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Vehicle() = 0;
	/**
	 \brief	Возвращает время движения
	 \returns	distance / average_speed.
	 */
	double get_travel_time()const;
	/**
	 \brief	Возвращает среднюю скорость
	 \returns average speed.
	 */
	double get_average_speed()const;
	/**
	 \brief	Возвращает модель средства передвижения
	 \returns model.
	 */
	string get_model()const;
	/**
	 \brief	Возвращает количество пассажиров
	 \returns number of passengers.
	 */
	double get_number_of_passengers()const;
	/**
	 \brief	Возвращает расстояние в километрах
	 \returns distance.
	 */
	double get_distance()const;
	/**
	 \brief	Принимает новое значение расстояния
	 */
	virtual void set_new_distance(const double distance) = 0;
};
