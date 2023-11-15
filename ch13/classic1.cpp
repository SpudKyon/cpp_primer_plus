//
// Created by dongdong on 2023/11/15.
//

#include <cstring>
#include <iostream>
#include "classic1.h"

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s2, s3, n, x) {
    primaryWork = new char[strlen(s1) + 1];
    strcpy(primaryWork, s1);
}

Classic::Classic() : Cd() {
    primaryWork = nullptr;
}

Classic::Classic(const Classic & d) : Cd(d) {
    primaryWork = new char[strlen(d.primaryWork) + 1];
    strcpy(primaryWork, d.primaryWork);
}

Classic::~Classic() {
    delete[] primaryWork;
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Primary Work: " << primaryWork << std::endl;
}

Classic & Classic::operator=(const Classic & d) {
    if (this == &d)
        return *this;
    Cd::operator=(d);
    delete[] primaryWork;
    primaryWork = new char[strlen(d.primaryWork) + 1];
    strcpy(primaryWork, d.primaryWork);
    return *this;
}