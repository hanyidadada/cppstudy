#include <iostream>
const int size = 12;

int main(){
    const char * Month[12] = 
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int num[12]={0};
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the sales number in " << Month[i] << ": ";
        std::cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += num[i];
    }
    std::cout << "The sales in this year is " << sum  << std::endl;
    return 0;    
}
