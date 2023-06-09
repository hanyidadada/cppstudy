#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar
{
    string name;
    float weight;
    int calory;
};

int main(){
    CandyBar *snacks = new CandyBar[3];
    snacks[0].name = "ZiDi";
    snacks[0].weight = 123.1;
    snacks[0].calory = 349;

    snacks[1].name = "Lays";
    snacks[2].weight = 232;
    snacks[3].calory = 2341;

    snacks[2].name = "KangSifu";
    snacks[2].weight = 73.3;
    snacks[2].calory = 3121;

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