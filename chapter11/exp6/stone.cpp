#include <iostream>
#include "stonewt.h"

using std::cout;
void display(const Stonewt &st, int n);

int main(void)
{
    Stonewt incognito = 275; // invalid if use explicit declare, should use (Stonewt) 275 or Stonewt(275). same in line 21
    Stonewt wolfe(285.7); 
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unerned\n";
    return 0;
}

void display(const Stonewt &st, int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Wow! ";
        st.show_stn();
    }   
}
