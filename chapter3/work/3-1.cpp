#include <iostream>

int main(){
    using namespace std;
    const int ftToinch = 12;
    int height;
    cout << "Enter your height of inch: _____\b\b\b\b\b";
    cin >> height;
    int ft = height / ftToinch;
    int inch = height % ftToinch;
    cout << "Your height is " << ft << " ft";
    if (inch)
    {
       cout << " and " << inch << " inch";
    }
    cout << ".\n";
    return 0;
}
