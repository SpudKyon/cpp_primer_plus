//
// Created by dongdong on 2023/11/14.
//

#ifndef CH12_STRING2_H
#define CH12_STRING2_H


#include <iostream>
#include <cctype>
#include <cstring>

class String {
private:
    char *str;
    int len;
public:
    String(const char *s);

    String();

    String(const String &);

    ~String();

    int length() const { return len; }

    String &operator=(const String &);

    String operator+(const String &) const;

    String operator+(const char *s) const;

    bool operator==(const String &) const;

    void stringlow();

    void stringup();

    int has(char ch) const;

    friend std::ostream &operator<<(std::ostream &os, const String &st);

    friend std::istream &operator>>(std::istream &is, String &st);

    friend String operator+(const char *s, const String &other);
};


#endif //CH12_STRING2_H
