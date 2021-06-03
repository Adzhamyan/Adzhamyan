#pragma once
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
protected:
	double fuel;
	/**
	 \brief	������� ��������� ���������� �������
	 */
	void set_fuel(double fuel);
	/**
	 \brief	������� ��������� ���������� ����������
	 */
	void set_number_of_passengers(int number_of_passengers) override;
public:
	/**
	 \brief	����������� �� ���������
	*/
	Car();
	/**
	 \brief	����������� � �����������
	*/
	explicit Car(double average_speed, string& model, int number_of_passengers, double distance, double fuel);
	/**
	 \brief	���������� �� ���������
	*/
	~Car() override = default;
	/**
	 \brief	���������� ���������� ������� � ������
	 \returns	fuel
	 */
	double get_fuel();
	/**
	 \brief	������������� ����� ���������� �������
	 */
	void set_new_fuel(double fuel);
	/**
	 \brief	���������� ������ ������� �� �������� ��������� ��� q - ������ ������� �� 100 ��
	 \returns	q * distance / 100
	 */
	double get_fuel_consumption(double q);
	/**
	 \brief	������� ��������� ����� ����������
	 */
	void set_new_distance(double distance) override;
};