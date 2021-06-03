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
	 \brief	��������� ����� ���������
	 */
	void set_correct_number_cylinders(unsigned int number_cylinders);
	/**
	 \brief	��������� ��������
	 */
	void set_correct_power(double power);
public:
	/**
	 \brief	����������� �� ���������
	 */
	Car();
	/**
	 \brief	����������� � �����������
	 */
	explicit Car(string trademark, unsigned int number_cylinders, double power);
	/**
	 \brief	���������� �� ���������
	 */
	~Car() = default;
	/**
	 \brief	����������� �����������
	 */
	Car(const  Car&) = default;
	/**
	 \brief	����������� ������������
	 */
	Car& operator=(const  Car&) = default;
	/**
	 \brief	�������� �����
	 */
	string get_trademark();
	/**
	 \brief	�������� ����� ���������
	 */
	unsigned int get_number_cylinders();
	/**
	 \brief	�������� ��������
	 */
	double get_power();
	/**
	 \brief	������ �����
	 */
	void set_trademark(string& trademark);
	/**
	 \brief	������ ����� ���������
	 */
	void set_number_cylinders(unsigned int number_cylinders);
	/**
	 \brief	������ ��������
	 */
	void set_power(double power);
};