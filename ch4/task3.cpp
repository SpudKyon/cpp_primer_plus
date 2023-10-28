//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int arrSize = 20;
    char firstName[arrSize];
    char lastName[arrSize];

    cout << "Enter your first name: ";
    cin.get(firstName, arrSize).get();
    cout << "Enter your last name: ";
    cin.get(lastName, arrSize).get();

    strcat(lastName, ", ");
    strcat(lastName, firstName);

    cout << "Here's the information on single string: " << endl;
    cout << lastName;
}