#ifndef PERSON1_H_
#define PERSON1_H_
#include <string>

class Person
{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() {lname = ""; fname[0] = '\0';};
    Person(const std::string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

#endif
