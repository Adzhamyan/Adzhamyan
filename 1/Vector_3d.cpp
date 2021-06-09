#include "Vector_3d.h"

Vector_3d::Vector_3d(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
Vector_3d::Vector_3d()
{
	this->a = 0;
	this->b = 0;
	this->c = 0;
}

Vector_3d Vector_3d::operator+(const Vector_3d& other)
{
	Vector_3d temp;
	temp.a = this->a + other.a;
	temp.b = this->b + other.b;
	temp.c = this->c + other.c;
	return temp;
}

Vector_3d Vector_3d::operator-(const Vector_3d& other)
{
	Vector_3d temp;
	temp.a = this->a - other.a;
	temp.b = this->b - other.b;
	temp.c = this->c - other.c;
	return temp;
}

double Vector_3d::get_scalar_composition(const Vector_3d& other)
{
	return this->a * other.a + this->b * other.b + this->c * other.c;
}
Vector_3d Vector_3d::get_multiplication_by_number(const Vector_3d, double a)
{
	Vector_3d temp;
	temp.a = this->a * a;
	temp.b = this->b * a;
	temp.c = this->c * a;
	return temp;
}

bool Vector_3d::are_qual(const Vector_3d& other)
{
	if (this->a == other.a && this->b == other.b && this->b == other.b)
	{
		return true;
	}
	else return false;
}

bool Vector_3d::is_greater(const Vector_3d& other)
{
	if (this->a > other.a && this->b > other.b && this->b > other.b)
	{
		return true;
	}
	else return false;
}

bool Vector_3d::is_less(const Vector_3d& other)
{
	if (this->a < other.a && this->b < other.b && this->b < other.b)
	{
		return true;
	}
	else return false;
}

double Vector_3d::get_length()
{
	return sqrt(a * a + b * b + c * c);
}

bool Vector_3d::are_qual_length(const Vector_3d& other)
{

	double len_1 = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
	double len_2 = sqrt(other.a * other.a + other.b * other.b + other.c * other.c);

	if (len_1 == len_2)
	{
		return true;
	}
	else return false;
}

bool Vector_3d::is_greater_length(const Vector_3d& other)
{
	double len_1 = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
	double len_2 = sqrt(other.a * other.a + other.b * other.b + other.c * other.c);

	if (len_1 > len_2)
	{
		return true;
	}
	else return false;
}

bool Vector_3d::is_less_length(const Vector_3d& other)
{
	double len_1 = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
	double len_2 = sqrt(other.a * other.a + other.b * other.b + other.c * other.c);

	if (len_1 < len_2)
	{
		return true;
	}
	else return false;
}
