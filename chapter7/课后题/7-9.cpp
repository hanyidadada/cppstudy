#include <iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int opplevel;
};

int getinfo(student pa[], int n)
{
    int count = 0;
    while (count < n) {
        cout << "Please input #" << count + 1  << "'s info:\n";
        cout << "Full name:";
        cin.getline(pa[count].fullname, SLEN);
        if (strlen(pa[count].fullname) == 0) {
            break;
        }
        cout << "Hobby:";
        cin >> pa[count].hobby;
        cout << "Opplevel:";
        cin >> pa[count].opplevel;
        cin.get();
        count++;
    }
    return count;
    
}

void display1(student st)
{
    cout << "Name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Opplevel: " << st.opplevel << endl;
}

void display2(student *ps)
{
    cout << "Name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Opplevel: " << ps->opplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Name: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Opplevel: " << pa[i].opplevel << endl;
    }    
}

int main()
{
    cout << "Enter class size:";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n') {
        continue;
    }
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete []ptr_stu;
    return 0;
}

