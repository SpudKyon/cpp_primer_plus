//
// Created by dongdong on 2023/11/8.
//

#include "Sales.h"
#include <iostream>
#include <algorithm>

Sales::Sales() {
    using namespace std;
    double total = 0;
    max = -1;
    min = 10000000000.0;
    for (double &sale: sales) {
        std::cout << "Please enter a number: ";
        std::cin >> sale;
        total += sale;
        max = std::max(max, sale);
        min = std::min(min, sale);
    }
    average = total / 4;
}

Sales::Sales(const double *ar, int n) {
    int len = std::min(n, QUARTERS);
    double total = 0;
    double arr[n];
    std::copy(ar, ar + n, arr);
    std::sort(arr, arr + n);
    int i;
    for (i = 0; i < len; ++i) {
        sales[i] = arr[i];
        total += arr[i];
    }
    for (; i < QUARTERS; ++i) {
        sales[i] = 0;
    }
    average = total / len;
    max = arr[len - 1];
    min = arr[0];
}

void Sales::show() {
    std::cout << "Sales:\n";
    for (int i = 0; i < QUARTERS; i++)
        std::cout << "Quarter " << i + 1 << ": " << sales[i] << '\n';
    std::cout << "Average: " << average << '\n';
    std::cout << "Max: " << max << '\n';
    std::cout << "Min: " << min << '\n';
}