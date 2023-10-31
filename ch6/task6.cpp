//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

struct contributor {
    string name;
    double contribution;
};

int main() {

    int len;
    cout << "Please enter the number of contributors: ";
    cin >> len;
    cin.get();
    struct contributor *contributors = new struct contributor[len];
    for (int i = 0; i < len; ++i) {
        cout << "Enter the name of contributor #" << i << ": ";
        getline(cin, contributors[i].name);
        cout << "Enter the contribution of contributor #" << i << ": ";
        cin >> contributors[i].contribution;
        cin.get();
    }

    int grand = 0;
    int patron = 0;

    std::cout << "Grand Patrons:" << endl;
    for (int i = 0; i < len; ++i) {
        if (contributors[i].contribution >= 10000) {
            cout << contributors[i].name << ":\t$" << contributors[i].contribution << endl;
            grand++;
        }
    }
    if (!grand) {
        cout << "none" << endl;
    }
    std::cout << "Patrons:" << endl;
    for (int i = 0; i < len; ++i) {
        if (contributors[i].contribution <= 10000) {
            cout << contributors[i].name << ":\t$" << contributors[i].contribution << endl;
            patron++;
        }
    }
    if (!patron) {
        cout << "none" << endl;
    }
    delete[] contributors;

}