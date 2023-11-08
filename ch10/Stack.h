//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_STACK_H
#define CH10_STACK_H

#include <stack>

struct customer {
    char fullname[35];
    double payment;
};

class Stack {
private:
    std::stack<customer> customers;
    double total;
public:
    Stack();
    void push(const customer& cs);
    bool pop();
    double getTotal();
};


#endif //CH10_STACK_H
