#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "X: " << x << " Y: " << y << std::endl;
}
Move Move::add(const Move &m) const
{
    return Move(this->x + m.x, this->y + m.y);
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
