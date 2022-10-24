#ifndef DMA_H_
#define DMA_H_

#include <iostream>

class abcDMA
{
private:
    char *label;
    int rating;
public:
    abcDMA(const char *l = "null", int r = 0);
    virtual ~abcDMA();
    virtual void viewDMA()=0;
    int Rating() { return rating; };
    char *Label() { return label; };
    abcDMA & operator=(const abcDMA &rs);
};

class baseDMA:public abcDMA
{
private:
    int test;
public:
    baseDMA(const char *l = "null", int r = 0, int t = 0);
    baseDMA(const abcDMA &rs, int t);
    virtual ~baseDMA();
    void viewDMA();
    baseDMA & operator=(const baseDMA &rs);
};

class lacksDMA:public abcDMA
{
private:
    enum{ COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lacksDMA(const char *c, const abcDMA &rs);
    ~lacksDMA() { };
    void viewDMA();
};

class hasDMA:public abcDMA
{
private:
    char *style;
public:
    hasDMA(const char *s = "blank", const char *l = "null", int r = 0);
    hasDMA(const char *s, const abcDMA &hs);
    hasDMA(const hasDMA &hs);
    ~hasDMA();
    void viewDMA();
    hasDMA & operator=(const hasDMA &hs);
};

#endif
