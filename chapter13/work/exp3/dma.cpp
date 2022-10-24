#include "dma.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

abcDMA::abcDMA(const char *l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}
abcDMA::~abcDMA()
{
    delete[] label;
}

abcDMA & abcDMA::operator=(const abcDMA &rs)
{
    if (this == &rs) {
        return *this;
    }
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::baseDMA(const char *l, int r, int t)
:abcDMA(l, r)
{
    test = t;
}

baseDMA::baseDMA(const abcDMA &rs, int t)
:abcDMA(rs)
{
    test = t;
}

baseDMA::~baseDMA()
{

}

void baseDMA::viewDMA()
{
    cout << "\nBASE DMA:\n";
    cout << "Label: " << abcDMA::Label() << endl;
    cout << "Rating: " << abcDMA::Rating() << endl;
    cout << "Test: " << test << endl;
}

baseDMA & baseDMA::operator=(const baseDMA &rs)
{
    if (this == &rs) {
        return *this;
    }
    abcDMA::operator=(rs);
    test = rs.test;
    return *this;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r):abcDMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const abcDMA &rs):abcDMA(rs)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

void lacksDMA::viewDMA()
{
    cout << "\nlacks DMA:\n";
    cout << "Label: " << abcDMA::Label() << endl;
    cout << "Rating: " << abcDMA::Rating() << endl;
    cout << "Test: " << color << endl;
}

hasDMA::hasDMA(const char *s, const char *l, int r)
:abcDMA(l, r)//key
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}
hasDMA::hasDMA(const char *s, const abcDMA &hs):abcDMA(hs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs):abcDMA(hs) //key
{

    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

void hasDMA::viewDMA()
{
    cout << "\nHAS DMA:\n";
    cout << "Label: " << abcDMA::Label() << endl;
    cout << "Rating: " << abcDMA::Rating() << endl;
    cout << "Test: " << style << endl;
}

hasDMA & hasDMA::operator=(const hasDMA &hs)
{
    if (this == &hs) {
        return *this;
    }
    abcDMA::operator=(hs); //key
    delete [] style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

