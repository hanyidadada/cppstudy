#include <iostream>

double add(double x, double y);
double calculate(double x, double y, double (*p1)(double x, double y));
double sub(double x, double y);

int main(){
    using namespace std;
    double x;
    double y;
    double (*fun[2])(double x, double y) = {add,sub};
    while (1)
    {
        std::cout << "Enter two double: ";
        std::cin >> x >> y;
        std::cout << "Use add:" << calculate(x,y,fun[0]) << std::endl;
        std::cout << "Use sub:" << calculate(x,y,fun[1]) << std::endl;
    }
    return 0;
}

double add(double x, double y){
    return x+y;
}
double sub(double x, double y){
    return x-y;
}
double calculate(double x, double y, double (*p1)(double x, double y)){
    double (*f1)(double x, double y) = p1;
    return f1(x,y);
}
