#include <iostream>

using std::string;
struct CandyBar
{
    string name;
    double weight;
    int    calory;
};

void setValue(CandyBar &cb, char *name = "Millemium Munch", double weight = 2.85, int calory = 150);
void showValue(const CandyBar &cb);

int main(void){
    CandyBar cb;
    setValue(cb);
    showValue(cb);
    setValue(cb, "dfsdf", 9.0, 123);
    showValue(cb);

}

void setValue(CandyBar &cb, char *name, double weight , int calory){
    cb.name = *name;
    cb.weight = weight;
    cb.calory = calory;
    return ;
}

void showValue(const CandyBar &cb){
    std::cout << "Name: " << cb.name << ", weight: " << cb.weight
              << ", calory: " << cb.calory << std::endl;
}
