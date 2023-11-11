//
// Created by dongdong on 2023/11/10.
//
#include "mytime.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

std::ostream &operator<<(std::ostream &os, const Time &t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

Time operator+(const Time &a, const Time &b) {
    Time time;
    time.AddHr(a.hours + b.hours);
    time.AddMin(a.minutes + b.minutes);
    return time;
}

Time operator-(const Time &a, const Time &b) {
    Time time;
    time.AddHr(a.hours - b.hours);
    time.AddMin(a.minutes - b.minutes);
    return time;
}

Time operator*(const Time &t, double m) {
    Time time;
    long long total = (t.hours * 60 + t.minutes) * m;
    time.hours = total / 60;
    time.minutes = total % 60;
    return time;
}
