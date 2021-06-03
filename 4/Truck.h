#pragma once
#include "Car.h"
using namespace std;
class Truck : public Car
{
private:
	double const MIN_CARRYING = 0;
	double const MAX_CARRYING = 15000;
	double carrying;
	/**
	 \brief	��������� ����������������
	 */
	void set_carrying(double carrying);
	/**
	 \brief	������� ��������� ���������� ����������
	 */
	void set_number_of_passengers(int number_of_passengers) override;
public:
	/**
	 \brief	����������� � �����������
	*/
	explicit Truck(double average_speed, string& model, int number_of_passengers, double distance, double fuel, double carrying);
	/**
	 \brief	���������� �� ���������
	 */
	~Truck() override = default;

	/**
	 \brief	���������� ����������������
	 \returns carrying.
	 */
	double get_carrying();
};
