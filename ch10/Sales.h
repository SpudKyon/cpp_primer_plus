//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_SALES_H
#define CH10_SALES_H


const int QUARTERS = 4;

class Sales {
private:
    double sales[QUARTERS];
    double average;
    double max;
    double min;

public:
    Sales();

    Sales(const double ar[], int n);

    void show();
};


#endif //CH10_SALES_H
