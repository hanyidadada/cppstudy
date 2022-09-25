#include <cmath>
#include "vector.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg = 45 / atan(1.0);

    void Vector::set_mag()
    {
        
    }

    void Vector::set_ang()
    {
        
    }

    void Vector::set_x()
    {

    }

    void Vector::set_y()
    {

    }

    Vector::Vector(/* args */)
    {
        x=y=0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        } else if (form == POL) {
            x = n1 * cos(n2);
            y = n1 * sin(n2);
            set_x();
            set_y();
        } else {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x=y=0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        } else if (form == POL) {
            x = n1 * cos(n2);
            y = n1 * sin(n2);
            set_x();
            set_y();
        } else {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x=y=0.0;
            mode = RECT;
        }
    }
    Vector::~Vector()
    {

    }

    double Vector::magval() const
    {
        return sqrt(x * x + y * y);
    }
    double Vector::angval() const
    {
        double ang;
        if (x == 0.0 && y == 0.0) {
            ang = 0.0;
        } else {
            ang = atan2(y, x);
        }
        return ang;
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(x * n, y * n);
    }

    Vector operator*(double n, const Vector &a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream &os, const Vector &v)
    {
        if (v.mode == Vector::RECT) {
            os << "(x,y) = (" << v.x << ", " << v.y << ")\n";
        } else if (v.mode == Vector::POL) {
            os << "(m,a) = (" << v.magval() << ", " << v.angval()*Rad_to_deg << ")\n"; 
        } else {
            os << "Vector object mode is invalid\n";
        }
        return os;
    }
} // namespace Vector


