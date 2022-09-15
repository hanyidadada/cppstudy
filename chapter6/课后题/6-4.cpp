#include <iostream>
const int strsize = 20;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int perference;
};

int main(){
    using namespace std;
    char ch;
    bop student[3]={
        {
            "陈泓舟",
            "教授",
            "爵士",
            2
        },
        {
            "黎昕卓",
            "博士",
            "总监",
            1
        },
        {
            "张玉展",
            "院长",
            "院士",
            0
        }
    };

    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name     b. display by title\n";
    cout << "c. display by bopname  d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            for (int i = 0; i < 3; i++)
                cout << student[i].fullname << endl;
            break;
        case 'b':
            for (int i = 0; i < 3; i++)
                cout << student[i].title << endl;
            break;
        case 'c':
            for (int i = 0; i < 3; i++)
                cout << student[i].bopname << endl;
            break;
        case 'd':
            for (int i = 0; i < 3; i++)
            {
                switch (student[i].perference)
                {
                case 0:
                    cout << student[i].fullname << endl;
                    break;
                case 1:
                    cout << student[i].title << endl;
                    break;
                case 2:
                    cout << student[i].bopname << endl;
                    break;
                }
            }
            break;
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye!\n";
}
