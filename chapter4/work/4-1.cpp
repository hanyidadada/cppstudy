#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char fname[20],lname[20];
    char grade;
    int age;
    
    cout << "What is your first name? ";
    cin.getline(fname, 20);
    cout << "What is your last name? ";
    cin.getline(lname, 20);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "Whart is your age? ";
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << (char)(grade+1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}