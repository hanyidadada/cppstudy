#include <iostream>
#include <new>
#include <cstring>

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
const int N = 2;
char buffer[BUF];

int main()
{
    using namespace std;
    chaff *pd1, *pd2;
    int i;
    cout << "Calling new and placement new:\n";
    pd1 = new chaff[N];
    pd2 = new (buffer) chaff[N];
    for (i = 0; i < N; i++) {
        pd2[i].slag = pd1[i].slag = 1000 + 20.0 * i;
        strcpy(pd1[i].dross,"name1");
        strcpy(pd2[i].dross,"name2");
    }
    cout << "Memory addresses:\n" << "  heap: " << pd1
        << " static: " << (void*) buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++) {
        cout << pd1[i].dross << " at " << (int)(pd1[i].dross) << "; ";
        cout << pd2[i].dross << " at " << (int)(pd2[i].dross) << endl;
        cout << pd1[i].slag << " at " << &pd1[i].slag << "; ";
        cout << pd2[i].slag << " at " << &pd2[i].slag << endl;
    }
    delete []pd1;
    return 0;
}
