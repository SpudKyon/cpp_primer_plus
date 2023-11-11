//
// Created by dongdong on 2023/11/10.
//

#ifndef CH11_MYTIME_H
#define CH11_MYTIME_H


#include <iostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    friend Time operator+(const Time &a, const Time &b);

    friend Time operator-(const Time &a, const Time &b);

    friend Time operator*(const Time &t, double m);

    friend Time operator*(double m, const Time &t) { return t * m; }   // inline definition
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};


#endif //CH11_MYTIME_H
