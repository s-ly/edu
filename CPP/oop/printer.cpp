#include "printer.h"

#include <iostream>

void Printer::PrintNum() { std::cout << num << std::endl; }

void Printer::SetNum(int number) { num = number; }

int Printer::GetNum() { return num; }