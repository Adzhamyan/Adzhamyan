#include "MyException2.h"
MyException2:: MyException2(std::string messages) :message{ messages } {}
MyException2:: ~MyException2() = default;