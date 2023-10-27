//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

void func(int hour, int min) {
    cout << "Time: " << hour << ":" << min << endl;
}

int main() {
    int hour, min;
    cout << "Enter the number of hour: ";
    cin >> hour;
    cout << "Enter the number of min: ";
    cin >> min;
    func(hour, min);
}