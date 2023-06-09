#include <iostream>
#include <string>
using namespace std;
struct car
{
    string producer;
    int years;
};

int main(){
    int num;
    cout << "How many cars do you wish to catalog?";
    cin >> num;
    car* cars = new car[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        cin.get();
        getline(cin,cars[i].producer); 
        cout << "Please enter the year made: ";
        cin >> cars[i].years;
    }
    cout << "Here is your collection: \n";
    for (int i = 0; i < num; i++)
    {
        cout << cars[i].years << " " << cars[i].producer << endl;
    }
    delete [] cars;
    return 0;
}

