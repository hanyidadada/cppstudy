#ifndef BANK_H_
#define BANK_H_
#include <string>

class Bank
{
private:
    std::string name;
    std::string account;
    double money;
public:
    Bank(std::string name = "none", std::string account = "none", double money = 0.0);
    void show();
    int save(double money);
    int get(double money);
};

#endif
