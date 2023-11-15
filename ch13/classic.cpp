//
// Created by dongdong on 2023/11/15.
//

#include <cstring>
#include <iostream>
#include "classic.h"

Classic::Classic(char *w, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x) {
    strcpy(primaryworks, w);
}

Classic::Classic() : Cd() {
    primaryworks[0] = '\0';
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "primary works: " << primaryworks << std::endl;
}

Classic &Classic::operator=(const Classic &other) {
    if (this == &other)
        return *this;
    strcpy(this->primaryworks, other.primaryworks);
    Cd::operator=(other);
    return *this;
}