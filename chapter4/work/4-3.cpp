#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    const int Asize = 20;
    char name[Asize], fname[Asize], lname[Asize];
    cout << "Enter your first name: ";
    cin.getline(fname, Asize);
    cout << "Enter your last name: ";
    cin.getline(lname, Asize);
    strcpy(name, lname);
    strcat(name, ", ");
    strcat(name, fname);
    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}
