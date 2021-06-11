#include "MyException2.h"
MyException2:: MyException2(const std::string& messages) :message{ messages } {}
MyException2:: ~MyException2() = default;