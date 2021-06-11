#pragma once
#include <cmath>
#include <ostream>
class Vector_3d
{
private:
	/**
	\brief	координата а
	*/
	double a;
	/**
	\brief	координата b
	*/
	double b;
	/**
	\brief	координата c
	*/
	double c;
public:
	/**
	\brief	конструктор с параметрами
	*/
	explicit Vector_3d(const double a, const double b, const double c);
	/**
	\brief	конструктор по умолчанию
	*/
	Vector_3d();

	/**
	\brief	деструктор по умолчанию
	*/
	~Vector_3d() = default;

	/**
	\brief	конструктор копирования по умолчанию
	*/
	Vector_3d(const  Vector_3d&) = default;

	/**
	\brief	конструктор присвоения по умолчанию
	*/
	Vector_3d& operator=(const  Vector_3d&) = default;


	Vector_3d(Vector_3d&& other) = default;

	/**
	\brief	сложение двух векторов
	*/
	Vector_3d operator+(const Vector_3d& other);
	
	/**
	\brief	разность двух векторов
	*/
	Vector_3d operator-(const Vector_3d& other);

	/**
	\brief	скалярное произведение двух векторов
	*/
	double get_scalar_composition(const Vector_3d& other);

	/**
	\brief	умножение на скаляр
	*/
	Vector_3d get_multiplication_by_number(double scalar);

	/**
	\brief	длина вектора
	*/
	double get_length() const;

	/**
	\brief	сравненние длин
	*/
	bool are_qual(const Vector_3d& other);
	
	/**
	\brief	сравненние длин
	*/
	bool is_greater(const Vector_3d& other);

	/**
	\brief	сравненние длин
	*/
	bool is_less(const Vector_3d& other);


	friend std::ostream& operator<<(std::ostream& out, Vector_3d& m);

};

