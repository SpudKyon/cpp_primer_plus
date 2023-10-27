//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

const int feet2inch = 12;

int main() {
    int inch;
    cout << "Please enter your height in inches: __\b\b";
    cin >> inch;

    cout << "You are " << inch / feet2inch << " feet, and " << inch % feet2inch << " inches." << endl;
}