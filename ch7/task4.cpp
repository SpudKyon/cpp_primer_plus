//
// Created by spud on 23-10-26.
//
#include <iostream>

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result *= n / p;
    }

    return result;
}

int main() {

    unsigned int field1 = 47;
    unsigned int field2 = 27;

    std::cout << "You have no chance in "
              << probability(field1, 5) * probability(field2, 1)
              << " of winning.\n" << std::endl;
    return 0;
}