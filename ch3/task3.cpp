//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

int main() {
    int degree;
    int minutes;
    int seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;

    cout << "First, enter the degrees: ";
    cin >> degree;

    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    cout << degree << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds: "
         << degree + (minutes + seconds / 60.0) / 60.0 << " degrees." << endl;
}