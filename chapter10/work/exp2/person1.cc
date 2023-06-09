#include <iostream>
#include "person1.h"
#include <cstring>

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    std::strcpy(fname, fn);   
}

void Person::Show() const
{
    std::cout << "Name: " << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
    std::cout << "Name: " << lname << " " << fname << std::endl;

}
