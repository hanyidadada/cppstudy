#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
    char name[20];
    int CI;
public:
    Plorg(char *na = "Plorga");
    void setCI(int a);
    void show();
};

#endif
