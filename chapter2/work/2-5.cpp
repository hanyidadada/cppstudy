#include <iostream>

float tempconvert(float);

int main(){
    float celsius;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    float fahrenheit = tempconvert(celsius);
    std::cout << celsius <<" degrees Celsius is " << fahrenheit <<" degrees Fahrenheit\t";
}

float tempconvert(float celsius){
    return celsius*1.8+32.0;
}
