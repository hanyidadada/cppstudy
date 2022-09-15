#include <iostream>
using std::string;
void showString(string *str, int n = 0);

int main(void){
    string str = "test string";

    showString(&str);
    showString(&str, 1);
    showString(&str);
    showString(&str,0);
    showString(&str,2);
    return 0;
}

void showString(string *str, int n){
    static int times = 0;
    if (n == 0)
    {
        std::cout << "1:Your string is:" << *str << std::endl;
        return;
    }
    times++;
    std::cout << "Times is: " << times << std::endl; 
    for (int i = 0; i < times; i++)
    {
        std::cout << "2:Your string is:" << *str << std::endl;
    }
    return ;
}
