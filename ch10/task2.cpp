//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "Person.h"

int main() {
    using namespace std;

    Person one;                                 // use default constructor
    Person two("Smythecraft");              // use #2 with one default argument
    Person three("Dimwiddy", "Sam");    // use #2, no defaults
    one.Show();
    cout << endl;
    one.FormalShow();
    // etc. for two and three
    two.Show();
    cout << endl;
    two.FormalShow();
}
