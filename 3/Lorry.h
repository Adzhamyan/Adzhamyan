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
	 \brief	����������� � �����������
	 */
	explicit Lorry(const string& trademark, const unsigned int number_cylinders, const double power, const double carrying);
	/**
	 \brief	�������� ����������������
	 */
	double get_carrying()const;
	/**
	 \brief	������ ����������������
	 */
	void set_carrying(const double carrying);
};

