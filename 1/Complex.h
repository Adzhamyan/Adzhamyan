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
	*\brief Конструктор по умолчанию
	*/
	Complex();
	
	/**
	*\brief Конструктор с параметрами
	* \param a действительная часть
	* \param b мнимая часть
	*/
	Complex(double real, double imaginary);



	/**
	*\brief Деструктор по умолчанию
	*/
	~Complex() = default;

	/**
	*\brief Геттер для действительной части
	*/
	double get_real();


	/**
	*\brief Геттер для мнимой части
	*/
	double get_imaginary();


	/**
	*\brief геттер для получения сопряжённого комплексного числа
	*/
	Complex get_conj();

	/**
	*\brief операторы сложения
	*/
	Complex operator+(const Complex& other);


	/**
	*\brief оператор вычитания
	*/
	Complex  operator-(const Complex& other);

	/**
	*\brief оператор умножения
	*/
	Complex  operator*(const Complex& other);

	/**
	*\brief оператор деления
	*/
	Complex   operator/(const Complex& other);

	/**
	*\brief метод для сравнения двух комплексных чисел
	*/
	bool  are_equal(const Complex& other);


	/**
	*\brief перегрузка оператора <<
	*/
	friend ostream& operator<< (ostream& out, const Complex& c);


	/**
	*\brief перегрузка оператора >>
	*/
	friend istream& operator>> (istream& in, Complex& c);

};


