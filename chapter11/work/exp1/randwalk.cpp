#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main(void) 
{
    using namespace std;
    using VECTOR::Vector;
    ofstream fout;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    fout.open("result.txt", ios::out);
    cout << "Enter target distance(q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) {
            break;
        }
        fout << "Target distance: " << target << ", Step size: " << dstep << endl;
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fout << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")\n";
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        fout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        fout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        fout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;    
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    return 0;
}
