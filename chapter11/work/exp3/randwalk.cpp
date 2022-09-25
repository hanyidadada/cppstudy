#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main(void) 
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long sumsteps = 0;
    unsigned long maxsteps = 0;
    unsigned long minsteps = 0;
    int times = 0;
    double target;
    double dstep;
    cout << "Enter target distance(q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) {
            break;
        }
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        maxsteps = steps > maxsteps ? steps : maxsteps;
        minsteps = minsteps > 0 ? (minsteps < steps ? minsteps : steps) : steps;
        sumsteps += steps;
        steps = 0;
        result.reset(0.0, 0.0);
        times++;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Max steps:" << maxsteps << endl;
    cout << "Min steps:" << minsteps << endl;
    cout << "Average steps:" << sumsteps/times << endl;
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    return 0;
}
