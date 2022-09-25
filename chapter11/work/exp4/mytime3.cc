#include "mytime3.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time &t, const Time &b)
{
    Time sum;
    sum.minutes = b.minutes + t.minutes;
    sum.hours = b.hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time &t, const Time &b)
{
    Time diff;
    int total1, total2;
    total1 = b.minutes + b.hours * 60;
    total2 = t.minutes + t.hours * 60;
    diff.hours = (total1 - total2) / 60;
    diff.minutes = (total1 - total2) % 60;
    return diff;
}

Time operator*(const Time &b, double n)
{
    Time result;
    long totalminutes = b.hours * n * 60 + b.minutes * n;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    result.minutes %= 60;
    return result;
}

std::ostream & operator<<(std::ostream &os, const Time &t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
