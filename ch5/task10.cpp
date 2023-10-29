//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>

using namespace std;

int main() {
    int len = 0;
    cout << "Enter the number of rows: ";
    cin >> len;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            cout << ". ";
        }
        for (int j = len - 1 - i; j < len; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}