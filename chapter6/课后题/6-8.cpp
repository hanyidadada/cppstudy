#include <iostream>
#include <fstream>
int main(){
    using namespace std;
    ifstream inFile;
    int numbers = 0;
    char ch;
    inFile.open("data.txt");
    inFile >> ch;
    while (inFile.good())
    {   
        if (ch != ' ' && ch != '\n')
            numbers++;
        inFile >> ch;
    }
    cout << "Read " << numbers << " characters.\n";
    return 0;
}
