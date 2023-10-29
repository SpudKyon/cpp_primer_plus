//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

int main() {
    int sum[] = {0, 0, 0};
    int total = 0;
    int sold[3][12] = {};
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "Please enter monthly sales number of " << months[i] << " in year " << i << endl;
            cin >> sold[i][j];
            sum[i] += sold[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        cout << "Yearly total sales number in year " << i << ": " << sum[i] << endl;
        total += sum[i];
    }
    cout << "Total sold number of 3 years: " << total << endl;

}