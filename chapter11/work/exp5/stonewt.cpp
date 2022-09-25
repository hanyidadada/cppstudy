#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn;
    stonedb = stone + pds_left;
    pounds = lbs;
    mode = POUDS;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    stonedb = stone + pds_left;
    pounds = stn * Lbs_per_stn + lbs;
    mode = STONEINT;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = stonedb = 0;
    mode = POUDS;
}

Stonewt::~Stonewt()
{

}
void Stonewt::poundsmode()
{
    mode = POUDS;
}

void Stonewt::stoneintmode()
{
    mode = STONEINT;
}

void Stonewt::stonedbmode()
{
    mode = STONEDB;
}

Stonewt Stonewt::operator+(const Stonewt &st) const
{
    return Stonewt(st.pounds + pounds);
}

Stonewt Stonewt::operator-(const Stonewt &st) const
{
    return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds * n);
}

Stonewt operator*(double n, const Stonewt &st)
{
    return st * n;
}

std::ostream & operator<<(std::ostream &os, Stonewt &st)
{
    if (st.mode == Stonewt::POUDS) {
        os << st.pounds << " pounds.";
    } else if (st.mode == Stonewt::STONEINT) {
        os << st.stone << " stones, " << st.pds_left << " pounds.";
    } else if (st.mode == Stonewt::STONEDB) {
        os << st.stonedb << " stones.";
    } else {
        os << "Type error!";
    }
    return os;
}
