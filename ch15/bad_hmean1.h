//
// Created by dongdong on 2023/11/23.
//

#ifndef CH15_BAD_HMEAN1_H
#define CH15_BAD_HMEAN1_H


#include <stdexcept>
#include <utility>

class arg_exception: public std::logic_error {
    double v1;
    double v2;
public:
    arg_exception(double a = 0, double b = 0, const std::string& msg = "none") : std::logic_error(msg), v1(a), v2(b) {}

    const char * what() const noexcept override;
};

class bad_hmean : public arg_exception {
public:
    bad_hmean(double a = 0, double b = 0, const std::string& msg = "invalid arguments") : arg_exception(a, b, msg) {}

    const char * what() const noexcept override;
};

class bad_gmean : public arg_exception {
public:
    bad_gmean(double a = 0, double b = 0, const std::string& msg = "arguments should be >= 0") : arg_exception(a, b,msg) {}

    const char * what() const noexcept override;
};

inline const char *arg_exception::what() const noexcept {
    std::string s = "v1: " + std::to_string(v1) + ", v2: " + std::to_string(v2) + ", msg: " + std::logic_error::what();
    return s.c_str();
}

inline const char *bad_hmean::what() const noexcept {
    return arg_exception::what();
}

inline const char *bad_gmean::what() const noexcept {
    return arg_exception::what();
}

#endif //CH15_BAD_HMEAN1_H
