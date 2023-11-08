//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_ACCOUNT_H
#define CH10_ACCOUNT_H


#include <string>

class Account {
private:
    std::string name;
    std::string number;
    long double balance;

public:
    Account(std::string name, std::string number, long double balance = 0);

    void toString();

    int deposite(long double money);

    int withdraw(long double money);
};


#endif //CH10_ACCOUNT_H
