//
// Created by dongdong on 2023/11/23.
//

#ifndef CH15_BAD_HMEAN_H
#define CH15_BAD_HMEAN_H


#include <iostream>

class bad_hmean : public std::logic_error {
public:
    bad_hmean() : std::logic_error("hmean() invalid arguments: a = -b\n") {}

    const char *what() const noexcept override {
        return "hmean() invalid arguments: a = -b\n";
    };
};

class bad_gmean : public std::logic_error {
public:
    bad_gmean() : std::logic_error("gmean() arguments should be >= 0\n") {}
    const char * what() const noexcept override {
        return "gmean() arguments should be >= 0\n";
    };
};


#endif //CH15_BAD_HMEAN_H
