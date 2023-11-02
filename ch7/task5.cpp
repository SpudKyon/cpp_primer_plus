//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

unsigned long long recurve(int num) {
    if (num == 1 || num == 0) {
        return 1;
    }
    return num * recurve(num - 1);
}

int main() {
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    cout << "Result: " << recurve(num) << endl;
}