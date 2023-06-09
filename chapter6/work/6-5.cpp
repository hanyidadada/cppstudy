#include <iostream>

int main(){
    using namespace std;
    double money;
    double tax;
    while (1)
    {   
        cout << "Enter your money: ";
        if (!(cin >> money))
        {
            cout << "Not a number!\n";
            break;
        }
        else if (money < 0)
        {
            cout << "Money < 0!\n";
            break;
        }
        if (money <= 5000)
        {
            tax = 0;
        }
        else if (money > 5000 && money <=15000)
        {
            tax = (money-5000)*0.1;
        }
        else if (money > 15000 && money <= 35000)
        {
            tax = 1000+(money-15000)*0.15;
        }
        else if (money > 35000)
        {
            tax = 1000+3000+(money-35000)*0.2;
        }
        
        cout<< "Your tax is: " << tax << endl;        
    }
    cout << "Bye!\n";
    return 0;
}
