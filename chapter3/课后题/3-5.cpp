#include <iostream>

int main(){
    long long USnum;
    long long Worldnum;
    using namespace std;
    cout << "Enter the world's population: ";
    cin >> Worldnum;
    cout << "Enter the population of the US: ";
    cin >> USnum;
    double result = (double)USnum/Worldnum;
    cout << "The population of the US is " << result*100 << "% of the world popilation.\n";
    return 0;
}
