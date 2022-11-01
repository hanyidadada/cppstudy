#include <iostream>
#include <cstring>
#include "workermi.h"

const int SIZE = 5;

int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    QueueTp<Worker> lolas(SIZE);
    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter  s: singer  "
             << "t: singing waiter  q:quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL) {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q') {
            break;
        }
        Worker *temp;
        switch (choice) {
        case 'w':
            temp = new Waiter;
            break;
        case 's':
            temp = new Singer;
            break;
        case 't':
            temp = new SingingWaiter;
            break;
        default:
            break;
        }
        cin.get();
        temp->Set();
        lolas.enqueue((*temp));
    }
    cout << "\nHere is your staff:\n";
    int i;
    while (!lolas.isempty()) {
        Worker *temp;
        cout << endl;
        lolas.dequeue(*temp);
        temp->Show();
    }   
    cout << "Bye.\n";
    return 0;
}

