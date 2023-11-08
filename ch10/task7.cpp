//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "Plorg.h"

int main() {
    Plorg plorg1;
    Plorg plorg2("Betelgeusean", 60);

    std::cout << "Plorg 1: ";
    plorg1.show();

    std::cout << "Plorg 2: ";
    plorg2.show();

    plorg1.setCI(70);
    std::cout << "Plorg 1 after changing CI: ";
    plorg1.show();

    return 0;
}