#include <iostream>

const int SIZE = 10;

int Fill_array(double arr[], int n);
void Show_array(double arr[], int n);
void Reverse_array(double arr[], int n);

int main(){
    double arr[SIZE];
    int len=0;
    len = Fill_array(arr,SIZE);
    Show_array(arr, len);
    Reverse_array(arr,len);
    Show_array(arr, len);
    Reverse_array(arr+1,len-2);
    Show_array(arr, len);
    return 0;
}

int Fill_array(double arr[], int n){
    int i = 0;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter Num" << i+1 << ": ";
        if(!(std::cin >> arr[i])){
            break;
        }
    }
    return i;
}
void Show_array(double arr[], int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void Reverse_array(double arr[], int n){
    double* i = arr;
    double* j = arr+n-1;
    double temp;
    for (; i < j; i++,j--)
    {   
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
