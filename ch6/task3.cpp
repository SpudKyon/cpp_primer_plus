//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    cout << "t) tree\t\tg) game" << endl;
    bool exit = false;
    char c;
    while (!exit && (cin >> c)) {

        switch (c) {
            case 'c':
                cout << "Tiger is a carnivore." << endl;
                exit = true;
                break;
            case 'p':
                cout << "Mozart is a great pianist." << endl;
                exit = true;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                exit = true;
                break;
            case 'g':
                cout << "Supper Mario is a great game." << endl;
                exit = true;
                break;

            default:
                cout << "Please enter c, p, t, or g:";
                break;
        }
    }

}