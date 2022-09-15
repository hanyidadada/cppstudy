#include<iostream>
void firstout(void);
void lastout(void);
int main(){
    firstout();
    firstout();
    lastout();
    return 0;
}
void firstout(void){
    std::cout << "Three blind mice" << std::endl;
}

void lastout(void){
    std::cout << "See how they run\n";
    std::cout << "See how they run" << std::endl;
}

