#include <iostream>

using namespace std;
const int ArSize = 10;
void strcount(const string str);

int main()
{
    
    string str;

    cout << "Enter a line:\n";
    getline(cin, str);

    while (str.length())
    {
        strcount(str);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, str);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str)
{
    using namespace std;
    static int total = 0;

    cout << "\"" << str << "\" contains ";
    total += str.length();
    cout << str.length() << " characters\n";
    cout << total << " characters total\n";
}

