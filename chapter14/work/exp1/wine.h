#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <string>
#include <valarray>
#include <utility>

class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef std::pair<ArrayInt, ArrayInt> PairArray;
    PairArray data;
    std::string label;
    int years;
public:
    Wine(const char *l, int y, const int yr[], const int bot[]) 
        : label(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) { };
    Wine(const char *l, int y) : label(l), years(y), data(ArrayInt(y), ArrayInt(y)) { };
    void GetBottles();
    const std::string & Label() const { return label; };
    void Show();
    int sum(); 
};


#endif
