#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int carrots;

    carrots = 25;
    cout << "I have "
         << carrots
         << " carrots."
         << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}
