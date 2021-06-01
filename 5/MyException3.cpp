#include "MyException3.h"
MyException3:: MyException3(std::string message) : invalid_argument(message) {}
MyException3:: ~MyException3() = default;