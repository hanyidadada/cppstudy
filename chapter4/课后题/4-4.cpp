#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    string name;
    char fname[20],lname[20];
    cout << "Enter your first name: ";
    cin.getline(fname, 20);
    cout << "Enter your last name: ";
    cin.getline(lname, 20);
    name.assign(lname);
    name.append(", ");
    name.append(fname);
    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}
