#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct user
{
    string name;
    double money;
};

int main(){
    int num;
    ofstream outfile;
    outfile.open("name.txt");
    cout << "Please enter number of users: ";
    cin >> num;
    outfile << num << endl;
    user* users = new user[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Patrons #" << i+1 << endl;
        cout << "name: "; 
        cin.get();
        getline(cin,users[i].name);
        outfile << users[i].name << endl;
        cout << "money: ";
        cin >> users[i].money;
        outfile << users[i].money << endl;
    }
    
    return 0;
}
