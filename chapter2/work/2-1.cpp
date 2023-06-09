//输入中文需要更改编码文件GBK编码，终端GBK
#include<iostream>
int main(){
    char name[20],addr[20];
    std::cout << "请输入你的名字：";
    std::cin >> name;
    std::cout << "请输入你的地址：";
    std::cin >> addr;
    std::cout << "欢迎您" << name << "，住址：" << addr << std::endl;
    return 0;
}