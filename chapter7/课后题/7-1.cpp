#include <iostream>

double average(double x, double y);

int main(){
    double x,y;
    std::cout << "Please enter two numbers: ";
    while (std::cin >> x >> y)
    {
        if(x == 0 || y == 0){
            break;
        }
        std::cout << "The average is: " << average(x,y) << std::endl;
        std::cout << "Enter other two numbers (0 to quit): ";
    }
    return 0;
}

double average(double x, double y){
    return 2.0 * x *y /(x+y);
}
