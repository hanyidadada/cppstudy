#include <iostream>
#include <climits>

#define ZERO 0

int main(){
    short sam = SHRT_MAX;
    unsigned short sue =sam;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\n";
    sam = sam + 1;
    sue = sue + 1;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nPoor Sam!\n";
    sam = ZERO;
    sue = ZERO;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nTake $1 from each account.\nNow ";
    sam = sam -1;
    sue = sue -1;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nLucky Sue!\n";
    return 0;
}
