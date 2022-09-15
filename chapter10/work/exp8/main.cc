#include <iostream>
#include "list.h"
void pf(Item &);
int main()
{
    Item values[3] = {1,2,3};
    List list1(values,3);
    list1.visit(pf);
    list1.add(2);
    list1.visit(pf);
    std::cout << "end..\n";
    List list2;
    std::cout << list2.isEmpty() << "  " << list1.isFull() << "\n";

    list2.add(1);
    list2.visit(pf);
}

void pf(Item & a)
{
    std::cout << a  << "\n";
}
