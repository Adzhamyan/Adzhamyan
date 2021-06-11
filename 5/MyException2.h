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
	explicit MyException2(const std::string& messages);

	/**
	* \brief Коструктор по умолчанию
	*/
	explicit MyException2() = default;

	/**
	* \brief Деструктор по умолчанию
	*/
	 ~MyException2();
};