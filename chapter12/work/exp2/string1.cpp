#include <cstring>
#include <cctype>
#include "string1.h"
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

// fixed constructor
String::String(const String &st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::~String()
{
    num_strings--;
    delete [] str;
}

char * String::Stringlow()
{
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

char * String::Stringhigh()
{
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int String::has(char ch)
{
    int num = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            num++;
        }
    }
    return num;
}

//fixed =
String & String::operator=(const String &s)
{
    if (this == &s) {
        return *this;
    }
    delete [] str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    return *this;
}

String & String::operator=(const char *s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

String & String::operator+(const String &st) const
{
    int templen =  st.len + len;
    char *temp = new char[templen + 1];
    std::strcpy(temp, str);
    std::strcat(temp, st.str);
    static String s = String(temp);
    if (std::strcmp(s.str, temp)) {
        std::strcpy(s.str, temp);
    }
    
    if (temp != NULL) {
        delete [] temp;
    }
    return s;
}

String & String::operator+(const char *st) const
{
    int templen =  std::strlen(st) + len;
    char *temp = new char[templen + 1];
    std::strcpy(temp, str);
    std::strcat(temp, st);
    static String s = String(temp);
    if (std::strcmp(s.str, temp)) {
        std::strcpy(s.str, temp);
    }
    
    if (temp != NULL) {
        delete [] temp;
    }
    return s;
}

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

String & operator+(const char *st1, const String &st2)
{
    int templen = std::strlen(st1) + st2.len;
    char *temp = new char[templen + 1];
    std::strcpy(temp, st1);
    std::strcat(temp, st2.str);
    static String s = String(temp);
    if (std::strcmp(s.str, temp)) {
        std::strcpy(s.str, temp);
    }
    if (temp) {
        delete []temp;
    }
    return s;   
}

istream & operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) {
        st = temp;
    }
    while (is && is.get() != '\n') {
        continue;
    }
    return is;   
}

std::ostream & operator<<(std::ostream &os, const String &st)
{
    os << st.str;
    return os;
}
  