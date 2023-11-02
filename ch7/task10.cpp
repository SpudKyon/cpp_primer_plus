//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>

using namespace std;

double calculate(double x, double y, double (*func_ptr)(double, double));

double add(double x, double y);

double sub(double x, double y);

double mul(double x, double y);

int main() {
    double (*pf[3])(double, double) = {add, sub, mul};
    for (int i = 0; i < 3; ++i) {
        int a, b, res;
        cout << "Please enter two number: ";
        cin >> b >> a;
        res = pf[i](a, b);
        cout << "Result:\t" << res << endl;
    }
}

double calculate(double x, double y, double (*func_ptr)(double, double)) {
    return func_ptr(x, y);
}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}