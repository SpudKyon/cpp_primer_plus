//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

const int strsize = 80;

struct bop {
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main() {
    const int size = 5;
    struct bop bops[size] = {
            {"Wimp Macho",   "bbb",   "c",      0},
            {"Raki Rhodes",  "2XXXX", "3XXXXX", 1},
            {"Celia Laiter", "2AAAA", "3AAAAA", 2},
            {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
            {"Pat Hand",     "4CCCC", "3CCCCC", 1}
    };

    cout << "Benevolent order of Programmers report.\n";
    cout << "a. display by name\tb. display by title\n"
         << "c. display by bopname\td. display by preference\n"
         << "q. quit" << endl;

    char ch;
    cout << "Enter you choice: ";
    while (cin >> ch) {
        if (ch == 'q') {
            break;
        }

        for (int i = 0; i < size; ++i) {
            switch (ch) {
                case 'a':
                    cout << bops[i].fullname << "\n";
                    break;
                case 'b':
                    cout << bops[i].title << "\n";
                    break;
                case 'c':
                    cout << bops[i].bopname << "\n";
                    break;
                case 'd':
                    cout << bops[i].preference << "\n";
                    break;
                default:
                    break;
            }
        }
        cout << "Next choice: ";
    }
    cout << "Bye!" << endl;
}