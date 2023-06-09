#include<iostream>

void outtime(int,int);

int main(){
    int hours,minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    outtime(hours,minutes);
}

void outtime(int hours,int minutes){
    std::cout << "Time: " << hours << ":" << minutes;
}
