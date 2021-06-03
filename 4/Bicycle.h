#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
private:
	/**
	 \brief	������� ��������� ���������� ����������
	 */
	void set_number_of_passengers(int number_of_passengers) override;
public:
	/**
	 \brief	����������� � �����������
	 */
	explicit Bicycle(double average_speed, string& model, int number_of_passengers, double distance);
	/**
	 \brief	���������� �� ���������
	 */
	~Bicycle() override = default;
	/**
	 \brief	������� ��������� ����� ����������
	 */
	void set_new_distance(double distance) override;
};