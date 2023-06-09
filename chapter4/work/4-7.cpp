#include <iostream>

struct PizeInfo
{
    char name[20];
    float length;
    float weight;
};


int main(){
    PizeInfo snacks;
    using namespace std;
    cout << "Enter the name of company: ";
    cin.getline(snacks.name,20);
    cout << "Enter the length of pizza: ";
    cin >> snacks.length;
    cout << "Enter the weight of pizza: ";
    cin >> snacks.weight;
    cout << "Company: " << snacks.name << endl;
    cout << "Length: " << snacks.length << endl;
    cout << "Weight: " << snacks.weight << endl;
    return 0;
}
