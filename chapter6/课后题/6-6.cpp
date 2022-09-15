#include <iostream>
#include <string>
using namespace std;
struct user
{
    string name;
    double money;
};

int main(){
    int num;
    cout << "Please enter number of users: ";
    cin >> num;
    user* users = new user[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Patrons #" << i+1 << endl;
        cout << "name: ";
        cin.get();
        getline(cin,users[i].name);
        cout << "money: ";
        cin >> users[i].money;
    }
    
    int m=0;
    cout << "Grand Patrons\n";
    cout << "name\t\tmoney\n";
    for (int i = 0; i < num; i++)
    {
        if(users[i].money>10000){
            cout << users[i].name << "\t\t" << users[i].money << endl;
            m++;
        }
    }
    if (m == 0)
    {
        cout << "none";
    }
    cout << "Patrons\n";
    cout << "name\n";
    if (m == num)
    {
        cout << "none";
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            if(users[i].money<=10000){
                cout << users[i].name << endl;
            }
        }
    }
    return 0;
}
