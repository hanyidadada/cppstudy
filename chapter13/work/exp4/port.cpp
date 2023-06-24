#include "port.h"
#include <cstring>

Port::Port(const char *br, const char * st, int b)
{
    brand = new char[strlen(br)+1];
    if (brand == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(brand, br);
    std::strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p)
{
    brand = new char[strlen(p.brand)+1];
    if (brand == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port &p)
{
    if (this == &p) {
        return *this;
    }
    delete [] brand;
    brand = new char[strlen(p.brand)+1];
    if (brand == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}
Port & Port::operator+=(int b)
{  
    this->bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if (this->bottles >= b) {
        this->bottles -= b;
    }

    return *this;
}
void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles <<endl;
}

ostream & operator<<(ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort():Port("none", "vintage", 0)
{
    nickname = new char[strlen("none")+1];
    if (nickname == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(nickname, "none");
    year = 0;
}
VintagePort::VintagePort(const char *br, int b, const char *nn, int yy):Port(br, "vintage",b)
{
    nickname = new char[strlen(nn)+1];
    if (nickname == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(nickname, nn);
    year = yy;
}

VintagePort::VintagePort(const VintagePort &vp):Port(vp)
{
    nickname = new char[strlen(vp.nickname)+1];
    if (nickname == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort &vp)
{
    if (this == &vp) {
        return *this;
    }
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname)+1];
    if (nickname == NULL) {
        cout << "out of space";
        exit(EXIT_FAILURE);
    }
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}
