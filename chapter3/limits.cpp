#include <iostream>
#include <climits>

int main(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    std::cout << "int is " << sizeof(int) << " bytes.\n";
    std::cout << "short is " << sizeof(short) << " bytes.\n";
    std::cout << "long is " << sizeof n_long << " bytes.\n";
    std::cout << "long long is " << sizeof n_llong << " bytes.\n";
    std::cout << "\n";

    std::cout << "Maximum values:\n";
    std::cout << "int: " << n_int << std::endl;
    std::cout << "short: " << n_short << std::endl;
    std::cout << "long: " << n_long << std::endl;
    std::cout << "long long: " << n_llong << std::endl;
    std::cout << "Minimum int value: " << INT_MIN << std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;
    return 0;
}
