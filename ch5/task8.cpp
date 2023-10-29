//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char input[100];
    int num = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> input;
    while (strcmp(input, "done") != 0) {
        num++;
        cin >> input;
    }
    cout << "You entered a total of " << num << " words.";

}