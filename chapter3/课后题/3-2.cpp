#include <iostream>

int main(){
    using namespace std;
    const int ftToinch =12;
    const float kgTopounds = 2.2;
    const float inchTometer =0.0254;

    int ft,inch;
    float ponds;
    cout << "Enter your height(ft inch): ";
    cin >> ft >>inch;
    
    cout << "Enter your weight: ";
    cin >> ponds;
    float height = (ft*ftToinch +inch)*inchTometer;
    float weight = ponds/kgTopounds;

    cout << "Your BMI is: " << weight/(height*height) << endl;
    return 0;
}
