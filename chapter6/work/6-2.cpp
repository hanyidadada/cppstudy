#include <iostream>
#include <array>
const int SIZE = 10;
int main(){
    using namespace std;
    array<double,10> donation = {0};
    int i=0,count=0;
    
    while (i<SIZE)
    {   cout << "Donation #" << i+1 <<": ";
        if (!(cin>>donation[i]))
        {
          break;  
        }
        i++;
    }
    double sum=0;
    double average = 0;
    for (int j = 0; j < i; j++)
    {
        sum+=donation[j];
    }
    average = sum / i;
    for (int j = 0; j < i; j++)
    {
        if(average >= donation[j])
            continue;
        count++;
    }
    cout << "Average: " << average << endl;
    cout << "Num: " << count << endl;
    return 0;
}
