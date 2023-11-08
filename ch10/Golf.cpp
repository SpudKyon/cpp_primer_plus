//
// Created by dongdong on 2023/11/8.
//

#include "Golf.h"
#include <cstring>
#include <iostream>

Golf::Golf(const char *name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

Golf::Golf() {
    std::cout << "Please enter golf's name: ";
    std::string name;
    std::cin.getline(fullname, Len);
    std::cout << "Please enter golf's handicap: ";
    std::cin >> handicap;
}

void Golf::setHandicap(int hc) {
    handicap = hc;
}

void Golf::show() {
    std::cout << "name:\t" << fullname << std::endl;
    std::cout << "handicap:\t" << handicap << std::endl;
}