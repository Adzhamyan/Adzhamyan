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
	void set_correct_carrying(double carrying);
public:
	/**
	 \brief	����������� � �����������
	 */
	explicit Lorry(string trademark, unsigned int number_cylinders, double power, double carrying);
	/**
	 \brief	�������� ����������������
	 */
	double get_carrying();
	/**
	 \brief	������ ����������������
	 */
	void set_carrying(double carrying);
};

