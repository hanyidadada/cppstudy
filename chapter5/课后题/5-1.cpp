#include <iostream>

int main(){
    using namespace std;
    int start,end;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;
    int sum = 0;
    for (int  i = start; i <= end; i++)
    {
        sum +=i;
    }
    cout << "The sum between " << start << " and " << end << " : " << sum;
    return 0;
}
