//
// Created by dongdong on 2023/11/14.
//

#include "string2.h"

String::String(const char *s) {
    size_t l = strlen(s);
    str = new char [l + 1];
    strcpy(str, s);
    len = l;
}

String::String() {
    len = 0;
    str = new char [1];
    str[0] = '\0';
}

String::String(const String & other) {
    int l = other.len;
    str = new char [l + 1];
    strcpy(str, other.str);
    len = l;
}

String::~String() {
    delete[] str;
}

String &String::operator=(const String & other) {
    int l = other.len;
    str = new char [l + 1];
    strcpy(str, other.str);
    len = l;
    return *this;
}

String String::operator+(const String & other) const {
    char * temp = new char[len + other.len + 1];
    std::strcpy(temp, str);
    std::strcat(temp, other.str);
    String result(temp);
    delete [] temp;
    return result;
}

void String::stringlow() {
    for (int i = 0; i < len; ++i) {
        str[i] = tolower(str[i]);
    }
}

void String::stringup() {
    for (int i = 0; i < len; ++i) {
        str[i] = toupper(str[i]);
    }
}

int String::has(char ch) const {
    int res = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == ch) {
            res++;
        }
    }
    return res;
}

std::ostream &operator<<(std::ostream &os, const String &st) {
    os << st.str;
    return os;
}

std::istream &operator>>(std::istream &is, String &st) {
    char temp[1000];
    is.get(temp, 1000);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

bool String::operator==(const String & other) const {
    return strcmp(str, other.str);
}

String String::operator+(const char *s) const {
    int l = strlen(s);
    char * temp = new char [len + l + 1];
    strcpy(temp, str);
    strcat(temp, s);
    String result(temp);
    delete[] temp;
    return result;
}

String operator+(const char *s, const String &other) {
    int l = strlen(s);
    char * temp = new char [other.len + l + 1];
    strcpy(temp, s);
    strcat(temp, other.str);
    String result(temp);
    delete[] temp;
    return result;
    return other + s;
}
