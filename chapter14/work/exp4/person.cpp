#include "person.h"
#include <iostream>

void Person::Show(void)
{
    std::cout << "Name: " << fname << " " << lname << std::endl;
}

void Gunslmger::Show(void)
{
    Person::Show();
    std::cout << "Nums: " << numbers << std::endl;
    std::cout << "Time: " << Draw() << std::endl;
}

double Gunslmger::Draw(void)
{
    srand(0);
    return (random()%1000)/100.0;
}

int PokerPlayer::Draw(void)
{
    srand(1);
    return (random()%52) + 1;
}

int BadDude::Cdraw(void)
{
    return PokerPlayer::Draw();
}

double BadDude::Gdraw(void)
{
    return Gunslmger::Draw();
}

void BadDude::Show(void)
{
    Gunslmger::Show();
    std::cout << "Card: " << Cdraw() << std::endl;
}
