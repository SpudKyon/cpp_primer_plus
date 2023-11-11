//
// Created by dongdong on 2023/11/10.
//

#include "stonewt.h"
#include <iostream>

using std::cout;


// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, state s) {
    stone = int(lbs) / Lbs_per_stn;    // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    status = s;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, state s) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    status = s;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::setStatus(Stonewt::state s) {
    status = s;
}

Stonewt Stonewt::operator+(const Stonewt &stn) const {
    double total = pounds + stn.pounds;
    return Stonewt(total);
}

Stonewt Stonewt::operator-(const Stonewt &stn) const {
    double total = pounds - stn.pounds;
    return Stonewt(total);
}

Stonewt Stonewt::operator*(const Stonewt &stn) const {
    double total = pounds * stn.pounds;
    return Stonewt(total);
}

Stonewt operator*(double n, const Stonewt &stn) {
    double total = n * stn.pounds;
    return Stonewt(total);
}

std::ostream &operator<<(std::ostream &os, const Stonewt &stn) {
    switch (stn.status) {
        case Stonewt::STN:
            std::cout << stn.stone << " stone";
            break;
        case Stonewt::POUND:
            std::cout << stn.pounds << " pounds";
            break;
        case Stonewt::POUNDS:
            std::cout << stn.pds_left << " pounds";
            break;
        default:
            break;
    }
    return os;

}
