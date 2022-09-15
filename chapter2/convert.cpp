#include<iostream>
int stonetolib(int);
int main(){
    int stone;
    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;
    int pounds =stonetolib(stone);
    std::cout << stone << " stone = " << pounds << " pounds.\n";
    return 0;
}

int stonetolib(int sts){
    return 14 * sts;
}