//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "Sales.h"
#include <cstring>          // for strlen(), strcpy()

using namespace std;

int main() {
    double ar1[QUARTERS] = {100.0, 200.0, 300.0, 400.0};
    double ar2[7] = {1.0, 8.0, 10.0, 4.0, 9.0, 20.0, 7.0};

    Sales s1 = Sales(ar1, QUARTERS);
    Sales s2 = Sales(ar2, 7);
    Sales s3 = Sales();

    std::cout << "Showing sales for s1:\n";
    s1.show();

    std::cout << "Showing sales for s2:\n";
    s2.show();

    std::cout << "Showing sales for s3:\n";
    s3.show();

    return 0;
}