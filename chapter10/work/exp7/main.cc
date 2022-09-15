#include <iostream>
#include "plorg.h"

int main()
{
    Plorg pl1("chz");
    Plorg pl2;

    pl1.show();
    pl2.show();
    
    pl1.setCI(100);
    pl1.show();
    pl2.setCI(11);
    pl2.show();
}
