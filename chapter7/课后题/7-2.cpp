#include <iostream>

const int MAX =10;
int Input(double a[]);
void output(double a[],int n);
double Average(double a[],int n);

int main(void){
    double num[MAX];
    int count;
    count = Input(num);
    output(num, count);
    double average;
    average = Average(num, count);
    std::cout << "Average: " << average << std::endl;
} 

int Input(double a[]){
    int i;
    for (i = 0; i < MAX; i++)
    {
        std::cout << "Num #" << i+1 << ": "; 
        if(!(std::cin >> a[i])){
            break;
        }
    }
    return i;
}
void output(double a[],int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}
double Average(double a[],int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum/n;
}
