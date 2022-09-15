#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int calory;
};

int main(){
    using namespace std;
    CandyBar snack ={
        "Mocha Munch",
        2.3,
        350
    };
    cout << "Name: " << snack.name << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calory: " << snack.calory << endl;
    return 0;
}
