#include <iostream>

int main(void){
    //using namespace std;//using编译指令
    using std::cout;  //using声明
    using std::cin;
    using std::endl;
    cout << "Enter an integer: ";
    int step;
    cin >> step;
    cout << "Counting by " << step << "s:\n";
    for (int  i = 0; i < 100; i+=step)
    {
        cout << i << endl;
    }
    return 0;
}
