//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;


template<typename T>
T max5(T arr[]) {
    T res = arr[0];
    for (int i = 1; i < 5; ++i) {
        res = max(res, arr[i]);
    }
    return res;
}


int main() {
    int arr_int[5] = {1, 2, 3, 4, 5};
    double arr_double[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Max of arr_int: " << max5(arr_int) << std::endl;
    std::cout << "Max of arr_double: " << max5(arr_double) << std::endl;

}