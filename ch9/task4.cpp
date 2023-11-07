//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "sales.h"

int main() {
    SALES::sales s1, s2, s3;
    double ar1[SALES::QUARTERS] = {100.0, 200.0, 300.0, 400.0};
    double ar2[7] = {1.0, 8.0, 10.0, 4.0, 9.0, 20.0, 7.0};

    SALES::setSales(s1, ar1, SALES::QUARTERS);
    SALES::setSales(s2, ar2, 7);
    SALES::setSales(s3);

    std::cout << "Showing sales for s1:\n";
    SALES::showSales(s1);

    std::cout << "Showing sales for s2:\n";
    SALES::showSales(s2);

    std::cout << "Showing sales for s3:\n";
    SALES::showSales(s3);

    return 0;
}
