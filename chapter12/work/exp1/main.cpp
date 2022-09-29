#include <iostream>
#include "cow.h"

int main(void)
{
    Cow a;
    Cow b = Cow("Hanyi", "robot", 12.3);
    a = b;
    a.showCow();
    b.showCow();
    Cow c = a;
    c.showCow();
}
