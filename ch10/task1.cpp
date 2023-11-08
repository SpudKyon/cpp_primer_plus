#include <iostream>
#include "Account.h"

int main() {

    Account ac = Account("zhangsan", "00001", 0);
    ac.deposite(99.0);
    ac.toString();
    ac.withdraw(100);
    ac.toString();
    ac.withdraw(50);
    ac.toString();
}