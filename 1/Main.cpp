#include <iostream>
#include "Vector_3d.h"

int main()
{
	Vector_3d a(1, 2, 3);
	Vector_3d b(1, 2, 3);
	Vector_3d c = a + b;
	std::cout << c << std::endl;;

	std::cout << a.are_qual(b);

}