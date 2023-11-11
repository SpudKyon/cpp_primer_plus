//
// Created by dongdong on 2023/11/10.
//

#ifndef CH11_STONEWT_H
#define CH11_STONEWT_H


#include <iostream>
class Stonewt {
public:
    enum state {
        STN, POUND, POUNDS
    };
private:
    enum {
        Lbs_per_stn = 14
    };      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    state status;
public:
    Stonewt(double lbs, state s = state::STN);          // constructor for double pounds
    Stonewt(int stn, double lbs, state s = state::STN); // constructor for stone, lbs
    void setStatus(state s);
    Stonewt();                    // default constructor
    ~Stonewt();

    Stonewt operator+(const Stonewt& stn) const;
    Stonewt operator-(const Stonewt& stn) const;
    Stonewt operator*(const Stonewt& stn) const;

    friend Stonewt operator*(double n, const Stonewt & stn);
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & stn);

};

#endif //CH11_STONEWT_H
