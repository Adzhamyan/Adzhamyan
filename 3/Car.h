#pragma once
using namespace std;
#include <string> 
#include <iostream>

class Car
{
protected:
	string trademark;
	unsigned int number_cylinders;
	double power;
	/**
	 \brief	провер€ет число цилиндров
	 */
	void set_correct_number_cylinders(unsigned int number_cylinders);
	/**
	 \brief	провер€ет мощность
	 */
	void set_correct_power(double power);
public:
	/**
	 \brief	 онструктор по умолчанию
	 */
	Car();
	/**
	 \brief	 онструктор с параметрами
	 */
	explicit Car(string trademark, unsigned int number_cylinders, double power);
	/**
	 \brief	ƒеструктор по умолчанию
	 */
	~Car() = default;
	/**
	 \brief	 онструктор копировани€
	 */
	Car(const  Car&) = default;
	/**
	 \brief	 онструктор присваивани€
	 */
	Car& operator=(const  Car&) = default;
	/**
	 \brief	получает марку
	 */
	string get_trademark();
	/**
	 \brief	получает число цилиндров
	 */
	unsigned int get_number_cylinders();
	/**
	 \brief	получает мощность
	 */
	double get_power();
	/**
	 \brief	задает марку
	 */
	void set_trademark(string& trademark);
	/**
	 \brief	задает число цилиндров
	 */
	void set_number_cylinders(unsigned int number_cylinders);
	/**
	 \brief	задает мощность
	 */
	void set_power(double power);
};