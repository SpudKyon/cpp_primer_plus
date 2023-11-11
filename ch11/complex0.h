//
// Created by dongdong on 2023/11/11.
//

#ifndef CH11_COMPLEX0_H
#define CH11_COMPLEX0_H


#include <iostream>

class Complex {

private:
    double real;
    double imag;

public:
    Complex();

    Complex(double real, double imag);

    ~Complex();

    Complex operator+(const Complex &other) const;

    Complex operator-(const Complex &other) const;

    Complex operator*(const Complex &other) const;

    Complex operator~() const;


    Complex operator*(double n) const;

    Complex operator*(int n) const;

    friend Complex operator*(double n, const Complex &other);

    friend std::istream &operator>>(std::istream &is, Complex &other);

    friend std::ostream &operator<<(std::ostream &os, const Complex &other);
};


#endif //CH11_COMPLEX0_H
