//
// Created by dongdong on 2023/11/8.
//
#include "List.h"

bool List::add(const Item & item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

void List::visit(void (*pf)(Item &)) {
    for (int i = 0; i < top; i++) {
        pf(items[i]);
    }
}
