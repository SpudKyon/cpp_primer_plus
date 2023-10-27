//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

int main() {
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    int days = seconds / 60 / 60 / 24;
    int hours = seconds / 60 / 60 % 24;
    int minutes = seconds / 60 % 60;
    int res_seconds = seconds % 60;
    cout << seconds << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << res_seconds << " seconds." << endl;
}