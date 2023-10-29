//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>

using namespace std;
const int arrSize = 101;

int main() {
    array<long double, arrSize> arr{};
    arr[0] = arr[1] = 1;
    for (int i = 2; i < arrSize; ++i) {
        arr[i] = i * arr[i - 1];
    }
    cout << "100! = " << arr[100] << endl;

}
