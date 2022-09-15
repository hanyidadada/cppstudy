#include <iostream>
#include "move.h"

int main()
{
    Move p1;
    Move p2(1, 2);
    p1.showmove();
    p2.showmove();
    p1.reset(1, 3);
    p1.showmove();

    p1.add(p2).showmove();
    return 0;
}
