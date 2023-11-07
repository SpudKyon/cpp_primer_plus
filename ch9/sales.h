//
// Created by dongdong on 2023/11/7.
//

#ifndef CH9_SALES_H
#define CH9_SALES_H

namespace SALES {
    const int QUARTERS = 4;
    struct sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    // copies the lesser of 4 or n items from the array ar
    // to the sales member of s and computes and stores the
    // average, maximum, and minimum values of the entered items;
    // remaining elements of sales, if any, set to 0
    void setSales(sales &s, const double ar[], int n);

    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minimum values
    void setSales(sales &s);

    // display all information in structure s
    void showSales(const sales &s);
}

#endif //CH9_SALES_H
