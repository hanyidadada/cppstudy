#include <iostream>

int main(){
    char ch = 'M';
    int i = ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;
    std::cout << "Add one to the character code:";
    ch += 1;
    i =ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;
    std::cout << "Displaying char ch using cout.put(ch)： ";
    std::cout.put(i);
    std::cout.put('!');
    std::cout.put('\n');
    std::cout << "Done\n";
}
