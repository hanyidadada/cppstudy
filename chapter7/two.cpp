#include <iostream>

void n_char(char, int);

int main(){
    using namespace std;
    int times;
    char ch;
    cout << "Enter a characcter: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_char(ch, times);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

void n_char(char ch, int num){
    while (num-- > 0)
    {
        std::cout << ch;
    }
    
}

