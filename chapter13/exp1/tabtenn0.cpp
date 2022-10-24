#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, 
            bool ht):lastname(ln), firstname(fn), hasTable(ht)
{

}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

TableTennisPlayer::~TableTennisPlayer()
{

}
