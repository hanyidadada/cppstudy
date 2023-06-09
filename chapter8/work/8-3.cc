#include <iostream>
#include <cctype>
#include <string>
using namespace std;
void showUpper(string &str);

int main(void){
    string str;
    cout << "Enter a string(q to quit): ";
    for (;;)
    {
        getline(cin, str);
        if (str == "q")
        {
            return 0;
        }
        showUpper(str);
        cout << "Enter next string(q to quit): ";

    }
    return 0;  
    
}

void showUpper(string &str){
    int i = 0;
    while (str[i]!='\0')
    {
        cout << (char)toupper(str[i]);
        i++;
    }
    cout << endl;
    return;
}
