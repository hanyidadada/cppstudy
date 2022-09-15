#include <iostream>

int main(){
    int years = 1;
    long double Daphne = 100;
    long double Cleo = 100;
    float Crate = 0.05f;

    while (Daphne >= Cleo)
    {
        Daphne +=  10;
        Cleo += Cleo*Crate;
        years++;
    }
    std::cout << "After " << years << " years Cleao is more than Daphne.\n";
    std::cout << "Cleo: " << Cleo << " and Daphne: " << Daphne;
    return 0;
}
