//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <fstream>

using namespace std;

struct contributor {
    string name;
    double contribution;
};

int main() {

    string fileName;
    ifstream is;
    unsigned int len = 0;

    cout << "Enter a file name: ";
    getline(cin, fileName);
    is.open(fileName);
    is >> len;
    is.get();

    struct contributor *contributors = new struct contributor[len];
    for (int i = 0; i < len; ++i) {
        getline(is, contributors[i].name);
        is >> contributors[i].contribution;
        is.get();
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