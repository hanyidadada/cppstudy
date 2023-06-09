#include <iostream>
#include <cctype>
#include <cstring>

int main(){
    using namespace std;
    int vowels = 0;
    int conson = 0;
    int others = 0;
    char word[20];
    cout << "Enter words (q to quit):\n";
    while (cin >> word)
    {
        if (!isalpha(word[0]))
        {
            others++;
        }
        else if (word[0]=='q' && strlen(word)==1)
        {
            break;
        }
        else
        {
            switch (word[0])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                conson++;
                break;
            }
        }  
    }
    cout << vowels << " words beginning with vowels\n";
    cout << conson << " words beginning with consonants\n";
    cout << others << " others\n";
    return 0;
}
