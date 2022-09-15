#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer po;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
        case 'A':
        case 'a':
            cout << "Enter a PO custmer to add: ";
            cout << "\n\tEnter a name: ";
            cin >> po.fullname;
            cout << "\tEnter payment: ";
            cin >> po.payment;
            if (st.isfull()) {
                cout << "Stack already full.\n";
            } else {
                st.push(po);
            }
            break;
        case 'p':
        case 'P': 
            if (st.isempty()) {
                cout << "Stack already empty\n";
            } else {
                st.pop(po);
                cout << "PO #" << "  name: " << po.fullname << " payment: " << po.payment << " popped\n";
                cout << "Total: " << st.showTotal() << "\n";
            }
            break;
        default:
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;    
}
