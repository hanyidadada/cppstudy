#include <iostream>
#include "tv.h"

int main()
{
    using std::cout;
    Tv s42;
    cout << "Innitial setting for 42\" TV:\n";
    s42.settings();
    s42.onff();
    s42.chanup();
    cout << "\nAdjusted setting for 42\" TV:\n";
    s42.chanup();
    cout << "\nAdjusted setting for 42\" TV:\n";
    s42.settings();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n 42\" settings after using remote:\n";
    s42.settings();
    s42.changestate(grey);
    grey.showstate();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\n58\" settings:\n";
    s58.settings();
    s58.changestate(grey);
    grey.showstate();
    return 0;
}
