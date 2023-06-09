#include <iostream>

template<typename T>
T max5(T a[5]);

int main(void){
    using namespace std;
    int a[5] = {12,50,6,2,1};
    cout << max5(a) << endl;
    double b[5] = {1200, 12, 33, 32, 10.2};
    cout << max5(b) << endl;
    return 0;
}

template<typename T>
T max5(T a[5]){
    return a[0] < a[1] ? (a[1] < a[2] ? (a[2] < a[3] ? (a[3] < a[4]  ? a[4] : a[3]) : (a[2] < a[4]  ? a[4] : a[2]))  : (a[1] < a[3] ? (a[3] < a[4] ? a[4] : a[3]) : (a[1] < a[4] ? a[4] :a[1]))) : (a[0] > a[2] ? (a[0] < a[3] ? (a[3] < a[4] ? a[4] : a[3]) : (a[0] < a[4] ? a[4] : a[0])) : (a[2] < a[3] ? (a[3] < a[4] ? a[4] : a[3]) : (a[2] < a[4] ? a[4] : a[2])));
}
