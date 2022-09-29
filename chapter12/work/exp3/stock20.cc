#include <iostream>
#include <cstring>
#include "stock20.h"

Stock::Stock()
{
    company = new char[1];
    company[1] = '\0';
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char *co, long n , double pr)
{
    company = new char[std::strlen(co) + 1];
    std::strcpy(company, co);

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
    delete[] company;
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

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
          << " Shares: " << shares << "\n";
    cout << " Share Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << "\n";
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val) {
        return s;
    } else {
        return *this;
    }   
}
std::ostream &operator<<(std::ostream &os, const Stock &s)
{
    using std::ios_base;
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);

    os << "Company: " << s.company
          << " Shares: " << s.shares << "\n";
    os << " Share Price: $" << s.share_val;
    os.precision(2);
    os << " Total Worth: $" << s.total_val << "\n";
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);

    return os;
}
