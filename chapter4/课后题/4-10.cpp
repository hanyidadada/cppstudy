#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<float,3> scores;
    cout << "Please Enter three scores: ";
    cin >> scores.at(0);
    cin >> scores[1];
    cin >> scores[2];
    cout << "Three times scores: ";
    cout << (scores[0]+scores[1]+scores[2])/3;
    return 0;
}
