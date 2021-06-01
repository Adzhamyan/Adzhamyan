#pragma once
#include <exception>
#include <iostream>
#include <string>
class MyException3 : public std::invalid_argument
{
public:
	/**
	* \brief  ласс насследник от стандартного исключени¤, дл¤ возврата ошибки
	*/
	explicit MyException3(std::string message);

	/**
	* \brief ƒеструктор по умолчанию
	*/
	~MyException3();
};
