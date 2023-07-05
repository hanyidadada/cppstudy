#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person
{
private:
    std::string lname;
    std::string fname;
public:
    Person(char str1[], char str2[]):fname(str1),lname(str2) { };
    Person(std::string str1 = "none", std::string str2 = "none"):fname(str1),lname(str2) { };
    void Show(void);
    ~Person() { };
};

class Gunslmger: virtual public Person
{
private:
    int numbers;
public:
    Gunslmger(char str1[], char str2[], int num):Person(str1, str2), numbers(num) { };
    Gunslmger(std::string str1 = "none", std::string str2 = "none", int num = 0):Person(str1, str2), numbers(num) { };
    void Show(void);
    double Draw(void);
    ~Gunslmger() { };
};

class PokerPlayer: virtual public Person
{
private:
public:
    PokerPlayer(char str1[], char str2[]):Person(str1, str2) { };
    PokerPlayer(std::string str1 = "none", std::string str2 = "none"):Person(str1, str2) { };
    int Draw(void);
    ~PokerPlayer() { };
};

class BadDude: public Gunslmger, public PokerPlayer
{
private:
public:
    BadDude(char str1[], char str2[], int num):Person(str1, str2), Gunslmger(str1, str2, num), PokerPlayer(str1, str2) { };
    BadDude(std::string str1 = "none", std::string str2 = "none", int num = 0):Person(str1, str2), Gunslmger(str1, str2, num), PokerPlayer(str1, str2) { };
    int Cdraw(void);
    double Gdraw(void);
    void Show(void);
    ~BadDude() { };
};

#endif
