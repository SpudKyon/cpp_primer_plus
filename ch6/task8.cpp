//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {

    string fileName;
    ifstream is;

    unsigned int num = 0;
    char ch;

    cout << "Enter a file name: ";
    getline(cin, fileName);

    is.open(fileName);
    while ((ch = is.get()) != EOF) {
        num++;
    }
    is.close();

    cout << "There are " << num << " characters in '" << fileName << "'" << endl;
}