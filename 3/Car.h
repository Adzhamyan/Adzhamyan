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
	 \brief	��������� ����� ���������
	 */
	void set_correct_number_cylinders(const unsigned int number_cylinders);
	/**
	 \brief	��������� ��������
	 */
	void set_correct_power(const double power);
	/**
	 \brief	����������� �� ���������
	 */
	Car();
public:
	
	/**
	 \brief	����������� � �����������
	 */
	explicit Car(const string& trademark, const unsigned int number_cylinders, const double power);
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
	string get_trademark()const;
	/**
	 \brief	�������� ����� ���������
	 */
	unsigned int get_number_cylinders()const;
	/**
	 \brief	�������� ��������
	 */
	double get_power()const;
	/**
	 \brief	������ �����
	 */
	void set_trademark(const string& trademark);
	/**
	 \brief	������ ����� ���������
	 */
	void set_number_cylinders(const unsigned int number_cylinders);
	/**
	 \brief	������ ��������
	 */
	void set_power(const double power);
};