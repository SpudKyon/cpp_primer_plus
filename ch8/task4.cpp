//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>          // for strlen(), strcpy()

using namespace std;


struct stringy {
    char *str;              // points to a string
    int ct;                 // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &gy, const char ch[]) {
    gy.ct = strlen(ch);
    gy.str = new char[gy.ct + 1];
    strcpy(gy.str, ch);
}

void show(stringy gy, int n = 1) {
    for (int i = 0; i < n; ++i) {
        cout << gy.str << endl;
    }
}

void show(const char *str, int n = 1) {
    for (int i = 0; i < n; ++i) {
        cout << str << endl;
    }
}

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);    // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    show(beany);        // prints member string once
    show(beany, 2);         // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);          // prints testing string once
    show(testing, 3);       // prints testing string thrice
    show("Done!");
    return 0;
}