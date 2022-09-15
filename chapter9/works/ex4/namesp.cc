#include <iostream>
#include "namesp.h"

namespace SALES{
    void setSales(Sales &s, const double ar[], int n)
    {
        s.average =0;
        s.max = ar[0];
        s.min = ar[0];
        for (int i = 0; i < n; i++) {
            s.sales[i] = ar[i];
            s.average += ar[i];
            s.max = s.max < ar[i] ? ar[i] : s.max;
            s.min = s.min > ar[i] ? ar[i] : s.min;
        }
        s.average /= n;
        return ;
    }
    void setSales(Sales &s)
    {
        s.average =0;
        for (int i = 0; i < QUARTERS; i++) {
            std::cout << "Enter " << i << " sales: ";
            std::cin >> s.sales[i];
            s.average += s.sales[i];
            if (i == 0) {
                s.max = s.sales[0];
                s.min = s.sales[0];
            } else {
                s.max = s.max < s.sales[i] ? s.sales[i] : s.max;
                s.min = s.min > s.sales[i] ? s.sales[i] : s.min;
            }            
        }
        s.average /= QUARTERS;
        return ;
    }
    void showSales(const Sales &s)
    {
        std::cout << "All sales:\n";
        for (int i = 0; i < QUARTERS; i++) {
            std::cout << " " << s.sales[i];
            if (i == QUARTERS-1) {
                std::cout << ";\n";
            } else {
                std::cout << ",";
            }
        }
        std::cout << "Max: " << s.max << std::endl;
        std::cout << "Min: " << s.min << std::endl;
        std::cout << "Average: " << s.average << std::endl;
        return ;
    }
}


