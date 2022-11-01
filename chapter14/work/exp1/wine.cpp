#include "wine.h"

void Wine::GetBottles()
{
    std::cout << "Enter " << label << " data for " << years << "year(s)\n";
    for (int i = 0; i < years; i++) {
        std::cout << "Enter year: ";
        std::cin >> data.first[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> data.second[i];
    }
}

void Wine::Show()
{
    std::cout << "Wine: " << label << std::endl;
    std::cout << "\tYear\tBottles\n";
    for (int i = 0; i < years; i++) {
        std::cout << "\t" << data.first[i] << "\t" << data.second[i] << std::endl;
    }
} 

int Wine::sum() {
    if (data.second.size() > 0) {
        return (data.second.sum() / data.second.size());
    } else {
        return 0;
    }
}
