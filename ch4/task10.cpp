//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>

using namespace std;

int main() {

    array<double, 3> scores;

    cout << "Enter threed result of the 40 meters runing time: \n";
    cin >> scores[0];
    cin >> scores[1];
    cin >> scores[2];

    cout << "The average result: " << (scores[0] + scores[1] + scores[2]) / 3 << endl;

}