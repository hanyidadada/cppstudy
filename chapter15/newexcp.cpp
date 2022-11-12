#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big {
    double stuff[20000];
};

int main(int argc, char const *argv[])
{
    Big *pb;
    try {
        cout << "Trying to get a big block of memory:\n";
        pb = new Big[200000];
        cout << "Got past the new request:\n";
    }
    catch(bad_alloc& e) {
        cout << "Caught the exception!\n";
        std::cerr << e.what() << '\n';
        exit(EXIT_FAILURE);
    }
    cout << "Memory successfully allocated\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    return 0;
}
