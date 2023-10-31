//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>
#include <cctype>

using namespace std;

int main() {
    int len = 10;
    double arr[len];
    double sum;
    double avg;
    int idx = 0;
    int num = 0;

    cout << "Please enter number in max 10 times: ";
    while (idx < len && cin >> arr[idx]) {
        sum += arr[idx];
        idx++;
    }

    avg = sum / idx;

    for (int i = 0; i < idx; ++i) {
        if (arr[i] > avg) {
            num++;
        }
    }
    cout << "The average is: " << avg << endl;
    cout << "Have "<< num << " input greater than average.";
}
