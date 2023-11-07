//
// Created by dongdong on 2023/11/7.
//
#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf &g, const char *name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g) {
    std::cout << "Please enter golf's name: ";
    std::string name;
    std::cin.getline(g.fullname, Len);
    std::cout << "Please enter golf's handicap: ";
    std::cin >> g.handicap;
    return strlen(g.fullname) == 0 ? 0 : 1;
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    std::cout << "name:\t" << g.fullname << std::endl;
    std::cout << "handicap:\t" << g.handicap << std::endl;
}