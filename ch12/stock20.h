//
// Created by dongdong on 2023/11/14.
//

#ifndef CH12_STOCK20_H
#define CH12_STOCK20_H


#include <iostream>
#include <cctype>
#include <cstring>

class Stock {
private:
    char *company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock();        // default constructor
    Stock(const char *str, long n = 0, double pr = 0.0);

    ~Stock();       // do-nothing destructor
    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    const Stock &topval(const Stock &s) const;

    friend std::ostream &operator<<(std::ostream &os, const Stock &stock);
};

#endif //CH12_STOCK20_H
