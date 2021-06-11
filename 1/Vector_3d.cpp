#include "Vector_3d.h"
#include <limits>

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
	return Vector_3d(this->a + other.a, this->b + other.b, this->c + other.c);
}

Vector_3d Vector_3d::operator-(const Vector_3d& other)
{
	return Vector_3d(this->a - other.a, this->b - other.b, this->c - other.c);
}

double Vector_3d::get_scalar_composition(const Vector_3d& other)
{
	return this->a * other.a + this->b * other.b + this->c * other.c;
}
Vector_3d Vector_3d::get_multiplication_by_number(double scalar)
{
	return Vector_3d(this->a * scalar, this->b * scalar, this->c * scalar);
}


double Vector_3d::get_length()
{
	return sqrt(a * a + b * b + c * c);
}

bool Vector_3d::are_qual(const Vector_3d& other)
{

	double len_1 = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
	double len_2 = sqrt(other.a * other.a + other.b * other.b + other.c * other.c);

	if (std::abs(len_1 - len_2) <= std::numeric_limits<double>::epsilon())
	{
		return true;
	}
	else return false;
}

bool Vector_3d::is_greater(const Vector_3d& other)
{
	double len_1 = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
	double len_2 = sqrt(other.a * other.a + other.b * other.b + other.c * other.c);

	return len_1 > len_2;
}

bool Vector_3d::is_less(const Vector_3d& other)
{
	double len_1 = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
	double len_2 = sqrt(other.a * other.a + other.b * other.b + other.c * other.c);

	return len_1 < len_2;
}

std::ostream& operator<<(std::ostream& out, Vector_3d& m)
{
	return out << m.a << " | " << m.b << " | " << m.c;
}
