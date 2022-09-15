#include <iostream>

int main(){
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    std::cout << "Monsieur cuts a striking figure!\n"
              << "chest = " << chest << " (decimal for 42)\n"
              << std::hex <<"waist = " << waist << " (hexadecimal for 42)\n"
              << std::oct <<"inseam = " << inseam << " (octal for 42)\n";
    return 0;
}
