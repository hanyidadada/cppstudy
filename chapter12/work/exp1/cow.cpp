#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char *na, const char *hb, double wei)
{
    std::strcpy(name, na);
    hobby = new char[std::strlen(hb) + 1];
    std::strcpy(hobby, hb);
    weight = wei;
}

Cow::Cow(const Cow &c)
{
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
    if (&c == this) {
        return *this;
    }
    delete[] hobby;
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    std::strcpy(name, c.name);
    weight = c.weight;
    return *this;
}

void Cow::showCow() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}

