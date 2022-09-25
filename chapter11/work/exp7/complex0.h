#ifndef __COMPLEX0_H_
#define __COMPLEX0_H_
#include <iostream>

class complex
{
private:
    double real;
    double img;
public:
    complex(double real, double img);
    complex(/* args */);
    ~complex();
    complex operator+(const complex &b) const;
    complex operator-(const complex &b) const;
    complex operator*(const complex &b) const;
    complex operator*(double n) const;
    complex operator~() const;
    friend complex operator*(double n, const complex &b);
    friend std::ostream & operator<<(std::ostream &os, const complex &b);
    friend std::istream & operator>>(std::istream &is, complex &b);
};

#endif
