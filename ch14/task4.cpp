//
// Created by dongdong on 2023/11/18.
//
#include <iostream>
#include <cstring>
#include "person.h"

const int SIZE = 5;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person *lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the person category:\n"
             << "g: gunslinger\t p: pokerPlayer  "
             << "b: badDude\tq: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == nullptr) {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice) {
            case 'g':
                lolas[ct] = new Gunslinger;
                break;
            case 'p':
                lolas[ct] = new PokerPlayer;
                break;
            case 'b':
                lolas[ct] = new BadDude;
                break;
            default:
                break;
        }
        cin.get();
//        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++) {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
    cout << "Bye.\n";
    return 0;
}