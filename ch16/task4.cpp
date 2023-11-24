//
// Created by dongdong on 2023/11/24.
//
#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);

int main() {
    long ar[] = {1, 2, 2, 3, 4, 5, 6, 6, 7, 8, 9};
    std::cout << "original: " << sizeof(ar) / sizeof(long) << ", after: " << reduce(ar, sizeof(ar) / sizeof(long))
              << std::endl;
    long ar2[] = {1, 8, 2, 4, 8, 5, 6, 7, 9, 8, 9};
    std::cout << "original: " << sizeof(ar2) / sizeof(long) << ", after: " << reduce(ar2, sizeof(ar2) / sizeof(long))
              << std::endl;
}

int reduce(long ar[], int n) {
    std::sort(ar, ar + n);
    auto a = std::unique(ar, ar + n);
    return a - ar;
}