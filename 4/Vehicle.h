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
	 \brief	��������� ������� ��������
	 */
	void set_average_speed(double average_speed);
	/**
	 \brief	����������� ������� ��������� ���������� ����������
	 */
	virtual void set_number_of_passengers(int number_of_passengers) = 0;
	/**
	 \brief	��������� ��������� � ����������
	 */
	void set_distance(double distance);
public:
	/**
	 \brief	����������� ����������
	 */
	virtual ~Vehicle() = 0;
	/**
	 \brief	���������� ����� ��������
	 \returns	distance / average_speed.
	 */
	double get_travel_time();
	/**
	 \brief	���������� ������� ��������
	 \returns average speed.
	 */
	double get_average_speed();
	/**
	 \brief	���������� ������ �������� ������������
	 \returns model.
	 */
	string get_model();
	/**
	 \brief	���������� ���������� ����������
	 \returns number of passengers.
	 */
	double get_number_of_passengers();
	/**
	 \brief	���������� ���������� � ����������
	 \returns distance.
	 */
	double get_distance();
	/**
	 \brief	��������� ����� �������� ����������
	 */
	virtual void set_new_distance(double distance) = 0;
};
