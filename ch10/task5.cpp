//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack stack;
    customer customer1 = {"John Doe", 100.0};
    customer customer2 = {"Jane Doe", 200.0};

    stack.push(customer1);
    stack.push(customer2);

    while (stack.pop()) {
        std::cout << "Running total: " << stack.getTotal() << std::endl;
    }

    return 0;
}