#include <iostream>

int main(){
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    std::cout << "Monsieur cuts a striking figure!\n"
              << "chest = " << chest << " (42 in decimal)\n"
              << "waist = " << waist << " (0x42 in hex)\n"
              << "inseam = " << inseam << " (042 in octal)\n";
    return 0;
}
