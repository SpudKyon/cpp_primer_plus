//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

int main() {
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    lastName.append(", ").append(firstName);

    cout << "Here's the information om single string: " << endl;
    cout << lastName;
}