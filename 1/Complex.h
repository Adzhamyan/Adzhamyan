#pragma once
#include <iostream>

#include <windows.h>

#include <string>
#include <iostream>

using namespace std;


class Complex {

	double real;
	double imaginary;
public:

	/**
	*\brief ����������� �� ���������
	*/
	Complex();
	
	/**
	*\brief ����������� � �����������
	* \param a �������������� �����
	* \param b ������ �����
	*/
	Complex(double real, double imaginary);



	/**
	*\brief ���������� �� ���������
	*/
	~Complex() = default;

	/**
	*\brief ������ ��� �������������� �����
	*/
	double get_real();


	/**
	*\brief ������ ��� ������ �����
	*/
	double get_imaginary();


	/**
	*\brief ������ ��� ��������� ����������� ������������ �����
	*/
	Complex get_conj();

	/**
	*\brief ��������� ��������
	*/
	Complex operator+(const Complex& other);


	/**
	*\brief �������� ���������
	*/
	Complex  operator-(const Complex& other);

	/**
	*\brief �������� ���������
	*/
	Complex  operator*(const Complex& other);

	/**
	*\brief �������� �������
	*/
	Complex   operator/(const Complex& other);

	/**
	*\brief ����� ��� ��������� ���� ����������� �����
	*/
	bool  are_equal(const Complex& other);


	/**
	*\brief ���������� ��������� <<
	*/
	friend ostream& operator<< (ostream& out, const Complex& c);


	/**
	*\brief ���������� ��������� >>
	*/
	friend istream& operator>> (istream& in, Complex& c);

};


