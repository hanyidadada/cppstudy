#include "person.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    BadDude ba("bad","dd", 112);
    ba.Show();
    std::cout << ba.Cdraw() << std::endl;
    PokerPlayer po("poker", "player");
    po.Show();
    Gunslmger gu("gun", "lmger", 11);
    gu.Show();
    return 0;
}


