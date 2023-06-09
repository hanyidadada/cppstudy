#include<iostream>
using std::endl;
using std::cout;
using std::cin;
int main(){
    int num;
    cout << "Enter number of long: ";
    cin >> num;
    int inch = num * 220;
    cout << num << "long = " << inch << "inch\n";
    return 0;
}