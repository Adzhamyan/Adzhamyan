#pragma once
using namespace std;
#include <string> 
#include <iostream>

class Car
{
protected:
	const int MIN_CYLINDERS = 0;
	const int MAX_CYLINDERS = 25;
	string trademark;
	unsigned int number_cylinders;
	double power;
	/**
	 \brief	провер€ет число цилиндров
	 */
	void set_correct_number_cylinders(const unsigned int number_cylinders);
	/**
	 \brief	провер€ет мощность
	 */
	void set_correct_power(const double power);
	/**
	 \brief	 онструктор по умолчанию
	 */
	Car();
public:
	
	/**
	 \brief	 онструктор с параметрами
	 */
	explicit Car(const string& trademark, const unsigned int number_cylinders, const double power);
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
	string get_trademark()const;
	/**
	 \brief	получает число цилиндров
	 */
	unsigned int get_number_cylinders()const;
	/**
	 \brief	получает мощность
	 */
	double get_power()const;
	/**
	 \brief	задает марку
	 */
	void set_trademark(const string& trademark);
	/**
	 \brief	задает число цилиндров
	 */
	void set_number_cylinders(const unsigned int number_cylinders);
	/**
	 \brief	задает мощность
	 */
	void set_power(const double power);
};