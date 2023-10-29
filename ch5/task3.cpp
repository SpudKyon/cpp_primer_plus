//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int sum = 1;
    int num = -1;
    while (num != 0) {
        sum += num;
        cout << "Please Enter any number(0 to quit): " << endl;
        cin >> num;
    }
    cout << "Total sum: " << sum << endl;
}