#include <iostream>
//使用CTRL+Z和ENTER模拟EOF条件
int main(){
    using namespace std;
    char ch;
    int count = 0;
    ch = cin.get();//推荐使用的是字符参数版本cin.get(ch)
    while (cin.fail() == false)
    {
        cout.put(ch);
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;    
}
