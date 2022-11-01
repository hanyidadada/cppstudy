#include "wine.h"

void Wine::GetBottles()
{
    std::cout << "Enter " << (const std::string &) *this << " ((PairArray &) *this) for " << years << "year(s)\n";
    for (int i = 0; i < years; i++) {
        std::cout << "Enter year: ";
        std::cin >> ((PairArray &) *this).first[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> ((PairArray &) *this).second[i];
    }
}

void Wine::Show()
{
    std::cout << "Wine: " << (const std::string &) *this << std::endl;
    std::cout << "\tYear\tBottles\n";
    for (int i = 0; i < years; i++) {
        std::cout << "\t" << ((PairArray &) *this).first[i] << "\t" << ((PairArray &) *this).second[i] << std::endl;
    }
} 

int Wine::sum() {
    if (((PairArray &) *this).second.size() > 0) {
        return (((PairArray &) *this).second.sum() / ((PairArray &) *this).second.size());
    } else {
        return 0;
    }
}
