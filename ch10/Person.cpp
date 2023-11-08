//
// Created by dongdong on 2023/11/8.
//

#include "Person.h"
#include <iostream>
#include <cstring>

Person::Person(const std::string &ln, const char *fn):lname(ln) {
    strcpy(this->fname, fn);
}

void Person::Show() const {
    using namespace std;
    cout << this->fname << " " << this->lname << endl;
}

void Person::FormalShow() const {
    using namespace std;
    cout << this->lname << " " << this->fname << endl;
}