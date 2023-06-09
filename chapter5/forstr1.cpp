#include <iostream>
#include <string>

int main(void){
    using namespace std;
    cout << "Enter a word: ";
    string name;
    cin >> name;

    for (int i = name.size()-1; i >= 0; i--) {
        cout << name[i];
    }
    cout << "\nBye.\n";
    return 0;
}
