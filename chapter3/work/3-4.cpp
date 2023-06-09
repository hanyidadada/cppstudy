#include <iostream>

int main(){
    const int dayhours =24;
    const int hourTominute = 60;
    const int minuteTosecond = 60;
    using namespace std;
    long num;
    
    cout << "Enter the number of seconds: ";
    cin >> num;
    int day,hour,minute,second;
    second = num % minuteTosecond;
    minute = num / minuteTosecond;
    hour = minute / hourTominute;
    minute %= hourTominute;
    day = hour / dayhours;
    hour %= dayhours;
    
    cout << num << " seconds = " << day << " days, " << hour << " hour, "
         << minute << " minute, " << second << " seconds.\n";
    return 0;
}
