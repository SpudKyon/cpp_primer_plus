//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;


int main() {
    int sum = 0;
    int sold[12] = {};
    char* months[] = {"January", "February", "March", "April", "May", "June",
                      "July","August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; ++i) {
        cout << "Please enter monthly sales number of " << months[i] << ": " << endl;
        cin >> sold[i];
        sum += sold[i];
    }
    cout << "Yearly total sales number: " << sum << endl;
    for (int i = 0; i < 12; ++i) {
        cout << months[i] << "sold:\t" << sold[i] << endl;
    }
}