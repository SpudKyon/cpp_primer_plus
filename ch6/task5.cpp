//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;


int main() {
    double income;
    double tax;
    cout << "Please enter your salary: ";
    cin >> income;
    while (income >= 0) {
        tax = 0;
        cout << "Income: " << income << endl;
        if (income > 35000) {
            tax += (income - 35000) * 0.2;
            income = 35000;
        }
        if (income > 15000) {
            tax += (income - 15000) * 0.15;
            income = 15000;
        }
        if (income > 5000) {
            tax += (income - 5000) * 0.1;
        }
        cout << "Tax: " << tax << endl;
        cin >> income;
    }


}