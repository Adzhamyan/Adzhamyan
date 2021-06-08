#pragma once
#include <exception>
#include <iostream>
#include <string>
/**
	* \brief Класс насследник от стандартного исключения, для возврата ошибки
	*/
class MyException3 : public std::invalid_argument
{
public:
	/**
	* \brief Коструктор с параметрами
	*/
	explicit MyException3(const std::string &message);

	/**
	* \brief Коструктор по умолчанию
	*/
	explicit MyException3() = default;

	/**
	* \brief Деструктор по умолчанию
	*/
	~MyException3();
};
