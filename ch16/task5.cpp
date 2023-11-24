//
// Created by dongdong on 2023/11/25.
//

#include <iostream>
#include <algorithm>

template<class T>
int reduce(T ar[], int n);

int main() {
    long ar[] = {1, 2, 2, 3, 4, 5, 6, 6, 7, 8, 9};
    std::cout << "original: " << sizeof(ar) / sizeof(long) << ", after: " << reduce(ar, sizeof(ar) / sizeof(long))
              << std::endl;
    std::string ar2[] = {"1", "8", "5", "2", "4", "8", "5", "6", "7", "9", "8", "9"};
    std::cout << "original: " << sizeof(ar2) / sizeof(std::string) << ", after: "
              << reduce(ar2, sizeof(ar2) / sizeof(std::string))
              << std::endl;
}

template<class T>
int reduce(T ar[], int n) {
    std::sort(ar, ar + n);
    auto a = std::unique(ar, ar + n);
    return a - ar;
}