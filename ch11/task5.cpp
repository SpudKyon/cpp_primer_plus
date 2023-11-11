//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "stonewt.h"

using namespace std;

void display(const Stonewt &st, int n);

int main() {
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8, Stonewt::POUNDS);

    cout << "The celebrity weighed ";
    incognito.setStatus(Stonewt::STN);
    cout << incognito << endl;
    cout << "The detective weighed ";
    incognito.setStatus(Stonewt::POUNDS);
    cout << incognito << endl;
    cout << "The President weighed ";
    incognito.setStatus(Stonewt::POUND);
    cout << incognito << endl;

    cout << taft << endl;
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    incognito.setStatus(Stonewt::STN);
    cout << incognito << endl;
    cout << "After dinner, the President weighed ";
    cout << taft << endl;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    return 0;
}

void display(const Stonewt &st, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Wow! ";
        cout << st << endl;
    }
}


