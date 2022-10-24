#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(char *s1, char *s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd() {
    std::cout << "\nCd delete\n";
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd &d)
{
    if (this == &d) {
        return *this;
    }
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char *s1, char *s2, char *s3, int n, double x)
:Cd(s1, s2, n, x)
{
    mainWork = new char[std::strlen(s3) + 1];
    std::strcpy(mainWork, s3);
}

Classic::Classic(const Cd &d, char *s3):Cd(d)
{
    mainWork = new char[std::strlen(s3) + 1];
    std::strcpy(mainWork, s3);
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "MainWork: " << mainWork << std::endl;
}

Classic & Classic::operator=(const Classic &d)
{
    Cd::operator=(d);
    delete [] mainWork;
    mainWork = new char[std::strlen(d.mainWork) + 1];
    std::strcpy(mainWork, d.mainWork);
}

Classic::~Classic()
{
    delete [] mainWork;
}
