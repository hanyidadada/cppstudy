#include<iostream>
void simon(int);

int main(){
    simon(3);
    std::cout << "Pick an intege: ";
    int count;
    std::cin >> count;
    simon(count);
    std::cout << "Done!\n";
    return 0;
}

void simon(int n){
    std::cout << "Simon says your touch your toes " << n << " times.\n";
}
