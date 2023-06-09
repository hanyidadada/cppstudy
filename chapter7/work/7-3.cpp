#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void PrintOut(box out);
void SetVolume(box * out);
int main(){
    box test;
    std::cout << "Input Maker: ";
    std::cin.getline(test.maker, 40);
    std::cout << "Input Heitht: ";
    std::cin >> test.height;
    std::cout << "Input Length: ";
    std::cin >> test.length;
    std::cout << "Input Width: ";
    std::cin >> test.width;
    std::cout << std::endl;
    SetVolume(&test);
    PrintOut(test);
    return 0;
}

void PrintOut(box out){
    std::cout << "Maker: " << out.maker << std::endl;
    std::cout << "Height: " << out.height << std::endl;
    std::cout << "Width: " << out.width << std::endl;
    std::cout << "Length: " << out.length << std::endl;
    std::cout << "Volume: " << out.volume << std::endl;
}
void SetVolume(box * out){
    out->volume = out->width * out->length * out->height;
}
