#include <iostream>
#include "complex0.h"

complex::complex(double real, double img)
{
    this->real = real;
    this->img = img;
}

complex::complex(/* args */)
{
    real = img = 0;
}

complex::~complex()
{

}

complex complex::operator+(const complex &b) const
{
    return complex(b.real + real, b.img + img);
}

complex complex::operator-(const complex &b) const
{
    return complex(real - b.real, img -  b.img);
}

complex complex::operator*(const complex &b) const
{
    return complex(real * b.img - img * b.real,  b.real * img +  real * b.img);
}

complex complex::operator*(double n) const
{
    return complex(real * n, img * n);
}

complex complex::operator~() const
{
    return complex(-real, -img);
}

complex operator*(double n, const complex &b)
{
    return b * n;
}

std::ostream & operator<<(std::ostream &os, const complex &b)
{
    os << "(" << b.real << ", " << b.img << "i)";
    return os;
}

std::istream & operator>>(std::istream &is, complex &b)
{
    is >> b.real >> b.img;
    return is;
}
