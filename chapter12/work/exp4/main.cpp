#include <iostream>
#include "stack.h"
using namespace std;
int main(void)
{
    Stack a = Stack();
    for (int i = 0; i < 6; i++) {
        Item item = (i + 1) * 1000;
        a.push(item);
    }
    Stack b = a;
    Item it;
    b.pop(it);
    cout << "1:" << it << endl;
    Stack c;
    c = b;
    cout << "b:\n";
    while (!b.isempty()) {
        b.pop(it);
        cout << it << endl;
    }
    cout << "\nc:\n";
    while (!c.isempty()) {
        c.pop(it);
        cout << it << endl;
    }
    it = 12;
    a.push(it);
    cout << "\na:\n";
    while (!a.isempty()) {
        a.pop(it);
        cout << it << endl;
    }

}

