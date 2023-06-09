#include <iostream>

int main (){
    const float convert = 60.0f;
    int degrees,minutes,seconds;
    using namespace std;

    cout << "Enter a latitude in degrees, minutes, seconds: \n";
    cout << "First, enter the minutes of arc: ";
    cin >> degrees;
    cout << "Next, enter ther seconds of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    float result = degrees + minutes/convert +seconds/(convert*convert);
    cout << degrees <<" degrees, " << minutes << " minutes, " << seconds
         << " seconds = " << result << " degrees\n";
    return 0;
}
