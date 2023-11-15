//
// Created by dongdong on 2023/11/15.
//

#include <iostream>
#include <cstring>
#include "cd1.h"

Cd::Cd(char * s1, char * s2, int n, double x) : selections(n), playtime(x) {
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
}

Cd::Cd(const Cd & d) : selections(d.selections), playtime(d.playtime) {
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
}

Cd::Cd() : performers(nullptr), label(nullptr), selections(0), playtime(0.0) {}

Cd::~Cd() {
    delete[] performers;
    delete[] label;
}

void Cd::Report() const {
    using namespace std;
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    if (this == &d)
        return *this;
    delete[] performers;
    delete[] label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}