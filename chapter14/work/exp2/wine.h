#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <string>
#include <valarray>
#include <utility>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
private:
    int years;
public:
    Wine(const char *l, int y, const int yr[], const int bot[]) 
        : std::string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) { };
    Wine(const char *l, int y) : std::string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) { };
    void GetBottles();
    const std::string & Label() const { return (const std::string &) *this; };
    void Show();
    int sum(); 
};


#endif
