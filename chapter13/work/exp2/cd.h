#ifndef CD_H_
#define CD_H_

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd &d);
};

class Classic:public Cd
{
private:
    char *mainWork;
public:
    Classic(char *s1 = "Null", char *s2 = "Null", char *s3 = "Null", int n = 0, double x = 0);
    Classic(const Cd &d, char *s3 = "Null");
    void Report() const;
    Classic & operator=(const Classic &d);
    ~Classic();
};



#endif
