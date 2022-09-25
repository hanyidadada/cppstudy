#include <iostream>
#include "stonewt.h"

using std::cout;
using std::endl;
void display(Stonewt &st, int n);

int main(void)
{
    Stonewt incognito = 275; // invalid if use explicit declare, should use (Stonewt) 275 or Stonewt(275). same in line 21
    Stonewt wolfe(285.7); 
    Stonewt taft(21, 8);

    cout << "The celebrity weighed " << incognito << endl;
    cout << "The detective weighed " << wolfe << endl;
    cout << "The President weighed " << taft << endl;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    return 0;
}

void display(Stonewt &st, int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Wow! ";
        cout << st << endl;
    }   
}
