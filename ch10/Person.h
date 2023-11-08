//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_PERSON_H
#define CH10_PERSON_H

#include <iostream>


class Person {
private:
    static const int LIMIT = 25;
    std::string lname{};       // Person's last name
    char fname[LIMIT]{};  // Person's first name
public:
    Person() {lname = "";fname[0] = '\0';} // #1
    Person(const std::string &ln, const char *fn = "Heyyou");   // #2
// the following methods display lname and fname
    void Show() const;        // firstname lastname format
    void FormalShow() const;  // lastname, firstname format
};


#endif //CH10_PERSON_H
