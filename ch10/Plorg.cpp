//
// Created by dongdong on 2023/11/8.
//

#include <cstring>
#include <iostream>
#include "Plorg.h"

Plorg::Plorg(char *n, int ci):CI(ci) {
    strcpy(name, n);
}

void Plorg::setCI(int ci) {
    CI = ci;
}

void Plorg::show() {
    std::cout << "Name: " << name << ", CI: " << CI << std::endl;
}