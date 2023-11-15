//
// Created by dongdong on 2023/11/15.
//
#include <iostream>
#include <cstring>
#include "port.h"


Port::Port(const char *br, const char *st, int b) : bottles(b) {
    int len = strlen(br);
    brand = new char[len + 1];
    strcpy(brand, br);
    strcpy(style, st);
}

Port::Port(const Port &p) : bottles(p.bottles) {
    int len = strlen(p.brand);
    brand = new char[len + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
}

Port &Port::operator=(const Port &p) {
    delete[] brand;
    int len = strlen(p.brand);
    brand = new char[len + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    return *this;
}

Port &Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b) {
    bottles -= b;
    return *this;
}

void Port::Show() const {
    using namespace std;
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream &operator<<(ostream &os, const Port &p) {
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}


VintagePort::VintagePort() : Port() {
    nickname = new char[1];
    nickname[0] = '\0';
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "vintage", b) {
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp), year(vp.year) {
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
}

VintagePort &VintagePort::operator=(const VintagePort &vp) {
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream &operator<<(ostream &os, const VintagePort &vp) {
    os << (const Port &) vp << ", " << vp.nickname << ", " << vp.year;
    return os;
}
