#include<iostream>

double convert(double);

int main(){
    double num;
    std::cout << "Enter the number of light years: ";
    std::cin >> num;
    double result = convert(num);
    std::cout << num << "light years = " << result << " astronomical units.\n";
    return 0;
}

double convert(double num){
    return num*63240;
}
