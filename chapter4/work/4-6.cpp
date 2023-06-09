#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int calory;
};

int main(){
    using namespace std;
    CandyBar snacks[3]={
        {
            "ZiDi",
            123.1,
            349
        },
        {
            "Lays",
            232,
            2341
        },
        {
            "KangSifu",
            73.3,
            3121
        }
    };

    cout << "\tSnacks[0]:\n";
    cout << "Name: " << snacks->name << endl;
    cout << "Weight: " << snacks->weight << endl;
    cout << "KangSifu: " << snacks->calory << endl;

    cout << "\tSnacks[1]:\n";
    cout << "Name: " << snacks[1].name << endl;
    cout << "Weight: " << snacks[1].weight << endl;
    cout << "KangSifu: " << snacks[1].calory << endl;

    cout << "\tSnacks[2]:\n";
    cout << "Name: " << (snacks+2)->name << endl;
    cout << "Weight: " << (snacks+2)->weight << endl;
    cout << "KangSifu: " << (snacks+2)->calory << endl;
    return 0;    
}   
