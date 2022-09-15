#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
    return ;
}

int setgolf(golf &g)
{
    std::cout << "Enter a name: ";
    std::cin.get(g.fullname, Len);
    if (strlen(g.fullname) == 0) {
        return 0;
    }
    std::cout << "Enter a number: ";
    std::cin >> g.handicap;
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
    return;
}

void showgolf(const golf &g)
{
    std::cout << "Name: " << g.fullname;
    std::cout << ", handicap: " << g.handicap << std::endl;
}