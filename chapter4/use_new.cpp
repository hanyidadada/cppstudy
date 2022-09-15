#include <iostream>

int main(){
    using namespace std;
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << "; location = " << &nights << endl;
    cout << "int ";
    cout <<  "value =" << *pt << ": location = " << pt << "\n";
    double *pd = new double;
    *pd = 10000001.0;

    cout << "double ";
    cout << "Value = " << *pd << ": location = " << pd << "\n";

    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    delete pd;
    delete pt;
    return 0;
}
