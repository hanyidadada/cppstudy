#include <iostream>
#include "bank.h"

Bank::Bank(std::string name, std::string account, double money)
{
    this->name = name;
    this->account = account;
    this->money = money;
}

void Bank::show()
{
    std::cout << "Name: " << name << "\n";
    std::cout << "Account: " << account << "\n";
    std::cout << "Money: " << money << "\n";
}

int Bank::save(double money)
{
    if (money < 0) {
        std::cout << "Can't save! The number is negative!\n";
    }

    this->money += money;
    return this->money;
}
int Bank::get(double money)
{
    if (money > this->money) {
        std::cout << "Can't get more than you have!\n";
    }
    
    this->money -= money;
    return this->money;
}
