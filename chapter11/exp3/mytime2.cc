#include <iostream>
#include "mytime2.h"

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

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const
{
    Time diff;
    int total1, total2;
    total1 = minutes + hours * 60;
    total2 = t.minutes + t.hours * 60;
    diff.hours = (total1 - total2) / 60;
    diff.minutes = (total1 - total2) % 60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long totalminutes = hours * n * 60 + minutes * n;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    result.minutes %= 60;
    return result;
}

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes.";
}
