//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

template<typename T>
T max(T arr[], int n) {
    T res = arr[0];
    for (int i = 1; i < n; ++i) {
        res = max(res, arr[i]);
    }
    return res;
}


int main() {
    int arr_int[] = {1, 2, 3, 4, 5, 6};
    double arr_double[] = {1.1, 8.2, 3.3, 4.4};

    std::cout << "Max of arr_int: " << max(arr_int, 6) << std::endl;
    std::cout << "Max of arr_double: " << max(arr_double, 4) << std::endl;

    return 0;
}