//
// Created by dongdong on 2023/11/8.
//

#include "Account.h"
#include <iostream>

Account::Account(std::string name, std::string number, long double balance) :
        name(name), number(number), balance(balance) {

}

void Account::toString() {
    using namespace std;
    cout << "name:\t" << this->name << endl;
    cout << "number:\t" << this->number << endl;
    cout << "balance:\t" << this->balance << endl;
}

int Account::deposite(long double money) {
    if (money < 0)
        return -1;
    this->balance += money;
    return 0;
}

int Account::withdraw(long double money) {
    if (money < 0 || this->balance < money)
        return -1;
    this->balance -= money;
    return 0;
}


