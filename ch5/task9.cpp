//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int num = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> input;
    while (input != "done") {
        num++;
        cin >> input;
    }
    cout << "You entered a total of " << num << " words.";

}