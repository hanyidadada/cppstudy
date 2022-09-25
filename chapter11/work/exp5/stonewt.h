#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
private:
    enum TYPE{POUDS, STONEINT, STONEDB};
    enum {Lbs_per_stn = 14};
    int stone;
    TYPE mode;
    double stonedb;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void poundsmode();
    void stoneintmode();
    void stonedbmode();
    Stonewt operator+(const Stonewt &st) const;
    Stonewt operator-(const Stonewt &st) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n, const Stonewt &st);
    friend std::ostream & operator<<(std::ostream &os, Stonewt &st);
};
#endif
