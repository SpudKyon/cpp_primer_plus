//
// Created by dongdong on 2023/11/11.
//

#include "complex0.h"

Complex::Complex() : real(0.0), imag(0.0) {}

Complex::Complex(double real, double imag) : real(real), imag(imag) {}

Complex Complex::operator+(const Complex &other) const {
    Complex res;
    res.real = real + other.real;
    res.imag = imag + other.imag;
    return res;
}

Complex Complex::operator-(const Complex &other) const {
    Complex res;
    res.real = real - other.real;
    res.imag = imag - other.imag;
    return res;
}

Complex Complex::operator*(const Complex &other) const {
    Complex res;
    res.real = real * other.real;
    res.imag = imag * other.imag;
    return res;
}

std::istream &operator>>(std::istream &is, Complex &other) {
    std::cout << "real: ";
    if (is >> other.real) {
        std::cout << "imaginary: ";
        is >> other.imag;
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, const Complex &other) {
    os << "(" << other.real << ", " << other.imag << "i)";
    return os;
}

Complex Complex::operator*(double n) const {
    Complex res;
    res.real = real * n;
    res.imag = imag * n;
    return res;
}

Complex Complex::operator*(int n) const {
    Complex res;
    res.real = real * n;
    res.imag = imag * n;
    return res;
}

Complex operator*(double n, const Complex &other) {
    return other * n;
}

Complex::~Complex() {

}

Complex Complex::operator~() const {
    Complex conj;
    conj.real = real;
    conj.imag = -imag;
    return conj;
}


