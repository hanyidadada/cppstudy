#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(rect* xypos,polar* dspos);
void show_polar(polar* dspos);

int main(){
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y value: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace,&pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

void rect_to_polar(rect* xypos,polar* dspos){
    using namespace std;
    dspos->distance = sqrt(xypos->x*xypos->x+xypos->y*xypos->y);
    dspos->angle = atan2(xypos->y,xypos->x);
}
void show_polar(polar* dspos){
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dspos->distance;
    cout << ", angle = " << dspos->angle*Rad_to_deg;
    cout << " degrees\n";
}
