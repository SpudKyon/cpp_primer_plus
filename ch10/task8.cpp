//
// Created by dongdong on 2023/11/8.
//
#include <iostream>
#include "list.h"

void square(Item & item) {
    std::cout << item * item << std::endl;
}

int main() {
    List list;

    for (int i = 1; i <= 10; i++) {
        list.add(i);
    }

    list.visit(square);

    return 0;
}