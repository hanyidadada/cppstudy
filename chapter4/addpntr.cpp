#include <iostream>

int main(){
    using namespace std;
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw += 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps += 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;

    cout << "access to elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "access to elements with pointer notation\n";
    cout << "*stacks = " << *stacks
         << ", *(stacks+1) = " << *(stacks+1) << endl;
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    cout << stacks+2 << endl;
    cout << &stacks +2 << endl;
    return 0;
}
