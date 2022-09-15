#include <iostream>
#include <cstring>
int main(){
    char word[25]={0};
    int num=0;
    std::cout << "Enter words (to stop, type the word done):";
    while (strcmp(word,"done")!=0)
    {
       std::cin >> word;
       num++;
    }
    std::cout << "You entered a total of " << num-1 << " words.";
    
}
