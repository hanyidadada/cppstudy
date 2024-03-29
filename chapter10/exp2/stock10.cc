#include <iostream>
#include "stock10.h"

Stock::Stock()
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n = 0, double pr = 0.0)
{
    std::cout << "Contructor using " << co << " called\n";
    company = co;

    if (n < 0) {
        std::cout << "Number of shares can't be negative; "
                    << company << " shares set to 0.\n";
    } else {
        shares = n;
    }
    
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout << "Bye." << company << "!\n";
}

void Stock::buy(long num, double price)
{
    if (num < 0) {
        std::cout << "Number of shares can't be negative; "
                    << company << " shares set to 0.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }   
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0) {
        cout << "Nmber of shares sold can't be negative. "
            << "Transaction is aborted.\n";
    } else if (num > shares) {
        cout << "You can't sell more than you have! "
            << "Transaction is aborted.\n";  
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << "Company: " << company
              << " Shares: " << shares << "\n"
              << " Share Price: $" << share_val
              << " Total Worth: $" << total_val << "\n";
}
