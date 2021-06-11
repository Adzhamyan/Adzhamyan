#pragma once
#include "Car.h"
#include <string>
using namespace std;
class Lorry:public Car
{
private:
	double carrying;
	const double MAX_CARRYING = 20000;
	const double MIN_CARRYING = 0;
	void set_correct_carrying(const double carrying);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Lorry(const string& trademark, const unsigned int number_cylinders, const double power, const double carrying);
	/**
	 \brief	получает грузоподъемность
	 */
	double get_carrying()const;
	/**
	 \brief	задает грузоподъемность
	 */
	void set_carrying(const double carrying);
};

