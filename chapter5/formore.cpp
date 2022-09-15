#include <iostream>

const int Arsize = 100;

int main(void){
    long long factorials[Arsize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2;i < Arsize; i++)
        factorials[i] = factorials[i-1] * i;
    for (int  i = 0; i < Arsize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;     
}
