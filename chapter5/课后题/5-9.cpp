#include <iostream>
int main(){
    std::string word;
    const std::string str = "done";
    int num=0;
    std::cout << "Enter words (to stop, type the word done):\n";
    while (word != str)
    {
       std::cin >> word;
       num++;
    }
    std::cout << "You entered a total of " << num-1 << " words.";
    
}