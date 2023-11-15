//
// Created by dongdong on 2023/11/14.
//

#include "stock20.h"

Stock::Stock() : shares(0), share_val(0.0), total_val(0.0) {
    company = new char[1];
    company[0] = '\0';
}

Stock::Stock(const char *str, long n, double pr) : shares(n), share_val(pr), total_val(share_val * shares) {
    int l = strlen(str);
    company = new char[l + 1];
    strcpy(company, str);
}

Stock::~Stock() {
    delete[] company;
}

void Stock::buy(long num, double price) {

    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    } else if (num > shares) {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

const Stock &Stock::topval(const Stock &s) const {
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

std::ostream &operator<<(std::ostream &os, const Stock &stock) {
    os << "Company:\t" << stock.company << "\tShares:\t" << stock.shares << "\tShare price: \t$"
       << stock.share_val << "\tTotal worth:\t$" << stock.total_val << std::endl;
    return os;
}




