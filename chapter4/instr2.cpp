#include <iostream>

int main(){
    using namespace std;
    const int ArSize  = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize); // cin >> name;  or cin.get(name,ArSize).get(); 后面的get是为了读取到新的一行，读取换行符
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize); // cin >> dessert or cin.get(desesert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
