#include <iostream>

int main(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to-quit:\n";
    cin.get(ch); //使用get成员函数读取空格
    // cin >> ch //直接使用cin会导致空格无法读取的问题
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    
    cout << endl << count << " characters read\n";
    return 0;    
}
