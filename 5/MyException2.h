#pragma once
#include <iostream>
#include <string>
/**
* \brief Независимый класс с полями, для возврата ошибки
*/
class MyException2
{
public:
	std::string message;
	/**
	* \brief Конструктор, принимающий сообщение об ошибке
	*/
	explicit MyException2(std::string messages);

	/**
	* \brief Деструктор по умолчанию
	*/
	 ~MyException2();
};