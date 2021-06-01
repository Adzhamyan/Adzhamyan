#include "Complex.h"
#include <string>
using namespace std;

Complex::Complex()
{

	this->real = 0;

	this->imaginary = 0;

}

Complex::Complex(double real, double imaginary)
{

	this->real = real;

	this->imaginary = imaginary;

}

double Complex::get_real()
{
	return real;
}

double Complex::get_imaginary()
{
	return imaginary;
}


Complex Complex::get_conj()
{
	Complex temp;
	temp.real= this->real;
	temp.imaginary = this->imaginary * (-1);
	return temp;
}

Complex Complex::operator+(const Complex& other)
{
	Complex temp;
	temp.real = this->real + other.real;
	temp.imaginary = this->imaginary + other.imaginary;
	return temp;
}

Complex Complex::operator-(const Complex& other)
{
	Complex temp;
	temp.real = this->real - other.real;
	temp.imaginary = this->imaginary - other.imaginary;
	return temp;
}

Complex Complex::operator*(const Complex& other)
{
	Complex temp;
	temp.real = ((this->real * other.real)-(this->imaginary * other.imaginary));
	temp.imaginary = ((this->real * other.imaginary)+(this->imaginary* other.real));
	return temp;
}

Complex Complex::operator/(const Complex& other)
{
	if ((other.real * other.real + other.imaginary * other.imaginary) != 0) 
	{
		Complex temp;
		temp.real = (((this->real * other.real) + (this->imaginary * other.imaginary)) / (other.real * other.real + other.imaginary * other.imaginary));
		temp.imaginary = (other.real * this->imaginary - this->real * other.imaginary) / ((other.real * other.real + other.imaginary * other.imaginary));
		return temp;
	}
	else
	{
		throw std::invalid_argument("division is impossible");
	}
}

bool Complex::are_equal(const Complex& other)
{
	if (this->real == other.real && this->imaginary == other.imaginary)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream& operator<<(ostream& out, const Complex& c)
{
	out << c.real << " + " << c.imaginary << "i";
	return out;
}

istream& operator>>(istream& in, Complex& c)
{
	in >> c.real >> c.imaginary;
	return in;
}
