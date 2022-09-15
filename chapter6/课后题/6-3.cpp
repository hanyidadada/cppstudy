#include <iostream>

int main(){
    using namespace std;
    char ch;
    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore           p) pianist\n";
    cout << "t) tree                g) game\n";
    while (cin >> ch)
    {
        switch (ch)
        {
        case 'c':
            cout << "This is a vegetarian dish that carnivores love.\n";
            return EXIT_SUCCESS;
            break;
        case 'p':
            cout << "Howard is a talented pianist.\n";
            return EXIT_SUCCESS;
            break;
        case 't':
            cout << "A maple is a tree.\n";
            return EXIT_SUCCESS;
            break;
        case 'g':
            cout << "She won six games to love in the second set.\n";
            return EXIT_SUCCESS;
            break;
        default:
            cout << "Please enter a c, p, t, or g: ";
            break;
        }
    }
    
}
