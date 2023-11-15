//
// Created by dongdong on 2023/11/12.
//

#include <cstring>
#include <iostream>
#include "cow.h"

Cow::Cow() {
    name[0] = '\0';
    hobby = new char [1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strcpy(name, nm);

    size_t len = strlen(ho);
    hobby = new char [len + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c) {
    strcpy(name, c.name);
    size_t len = strlen(c.hobby);
    hobby = new char [len + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete[] hobby;
}

Cow &Cow::operator=(const Cow &c) {
    strcpy(name, c.name);
    size_t len = strlen(c.hobby);
    hobby = new char [len + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    using namespace std;
    cout << "Name:\t" << name << "\tHobby:\t" << hobby << "\tWight:\t" << weight << endl;
}
