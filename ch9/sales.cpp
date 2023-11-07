//
// Created by dongdong on 2023/11/7.
//

#include "sales.h"
#include <iostream>
#include <algorithm>
#include <cmath>

namespace SALES {

    void setSales(sales &s, const double ar[], int n) {
        int len = std::min(n, QUARTERS);
        double total = 0;
        double arr[n] ;
        std::copy(ar, ar + n, arr);
        std::sort(arr, arr +n);
        int i;
        for (i = 0; i < len; ++i) {
            s.sales[i] = arr[i];
            total += arr[i];
        }
        for (; i < QUARTERS; ++i) {
            s.sales[i] = 0;
        }
        s.average = total / len;
        s.max = arr[len - 1];
        s.min = arr[0];
    }

    void setSales(sales &s) {
        double total = 0;
        s.max = -1;
        s.min = 10000000000.0;
        for (double &sale: s.sales) {
            std::cout << "Please enter a number: ";
            std::cin >> sale;
            total += sale;
            s.max = std::max(s.max, sale);
            s.min = std::min(s.min, sale);
        }
        s.average = total / 4;
    }

    void showSales(const sales &s) {
        std::cout << "Sales:\n";
        for (int i = 0; i < QUARTERS; i++)
            std::cout << "Quarter " << i + 1 << ": " << s.sales[i] << '\n';
        std::cout << "Average: " << s.average << '\n';
        std::cout << "Max: " << s.max << '\n';
        std::cout << "Min: " << s.min << '\n';
    }

} // SALES