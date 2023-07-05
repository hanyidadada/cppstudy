#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
    const char * what();
};

const char * bad_hmean::what()
{
    return "invalid arguments: a = -b in hmean\n";
}

class bad_gmean : public std::logic_error
{
public:
    const char * what();
};

const char * bad_gmean::what()
{
    return "gmean() arguments should be >= 0 in gmean\n";
}


#endif
