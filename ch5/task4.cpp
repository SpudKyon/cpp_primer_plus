//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

int main() {
    int years = 0;
    double daphne = 100;
    double cleo = 100;

    while (daphne >= cleo) {
        years++;
        daphne += 10;
        cleo *= 1.05;
    }
    cout << "After " << years << " years later..." << endl;
    cout << "Daphne's total: " << daphne << endl;
    cout << "Cleo's total: " << cleo << endl;
}