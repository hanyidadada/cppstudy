#include <iostream>
#include "bank.h"

int main()
{
    Bank user1("chenhongzhou", "001122", 11111111.0);
    Bank user2("yewenjie", "119922");
    user1.show();
    user2.show();

    user2.save(1112);
    user1.get(11111);

    user2.show();
    user1.show();
}
