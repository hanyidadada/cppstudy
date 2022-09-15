#include <iostream>
#include "namesp.h"

int main()
{
    SALES::Sales s1,s2;
    SALES::setSales(s1);
    SALES::setSales(s2, s1.sales, SALES::QUARTERS);
    std::cout << "First Sale\n";
    SALES::showSales(s1);
    std::cout << "Second Sale\n";
    SALES::showSales(s2);
}
