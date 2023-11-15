//
// Created by dongdong on 2023/11/15.
//

#include <cstring>
#include <iostream>
#include "cd.h"

Cd::Cd(char *s1, char *s2, int n, double x) : selections(n), playtime(x) {
    strcpy(performers, s1);
    strcpy(label, s2);
}

Cd::Cd() : selections(0), playtime(0) {
    performers[0] = '\0';
    label[0] = '\0';
}

Cd::Cd(const Cd &d) : selections(d.selections), playtime(d.playtime) {
    strcpy(performers, d.performers);
    strcpy(label, d.label);
}

Cd::~Cd() {

}

void Cd::Report() const {
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d) {
    strcpy(this->label, d.label);
    strcpy(this->performers, d.performers);
    this->playtime = d.playtime;
    this->selections = d.selections;
    return *this;
}
