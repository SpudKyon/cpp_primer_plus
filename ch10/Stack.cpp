//
// Created by dongdong on 2023/11/8.
//

#include <iostream>
#include "Stack.h"

Stack::Stack() {

}

void Stack::push(const customer &cs) {
    customers.push(cs);
}

bool Stack::pop() {
    if (customers.empty()) {
        return false;
    }
    total += customers.top().payment;
    customers.pop();
    return true;
}

double Stack::getTotal() {
    return total;
}