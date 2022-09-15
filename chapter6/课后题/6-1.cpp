#include <iostream>
#include <cctype>

int main(){
    using namespace std;
    char ch;
    while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
        {
            continue;
        }
        else if (islower(ch))
        {
            cout << char(toupper(ch));
        }
        else if (isupper(ch))
        {
            cout << char(tolower(ch));
        }
        else
        {
            cout << ch;
        }      
    }
    return 0;
}
