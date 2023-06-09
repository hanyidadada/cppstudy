#include <iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    cin >> number;
    while (number != 0)
    {
        sum += number;
        cout << "Now the sum is " << sum << endl;
        cin >> number;
    }
    
    return 0;
}
