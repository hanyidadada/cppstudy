#include <iostream>
#include "person1.h"

int main()
{
    Person per1("TEST", "LST");
    Person per2("SEC", "NND");
    
    per1.Show();
    per2.Show();
    per2.FormalShow();
    per1.FormalShow();
}
