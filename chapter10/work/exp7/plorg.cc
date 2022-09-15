#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(char *na)
{
    std::strcpy(name, na);
    CI = 50;
}

void Plorg::setCI(int a)
{
    CI =a;
}

void Plorg::show()
{
    std::cout << "Name: " << name << ", CI: " << CI << std::endl;
}
