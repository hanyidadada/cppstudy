#include <iostream>

int Cal(int n);

int main(){
    int num;
    while (1)
    {
       std::cout << "Enter a number: ";
       if(!(std::cin >> num))
        {
            break;
        }
       std::cout << "Result: " << Cal(num) << "\n\n";
    }
    return 0;
}

int Cal(int n){
    if (n == 0)
    {
        return 1;
    }
    return n*Cal(n-1);
}
