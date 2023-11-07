//
// Created by spud on 23-10-26.
//
#include <iostream>

// function prototype
void strcount(const std::string str);

int main() {
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin) {
        if (input.length() == 0)
            break;
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const std::string str) {
    using namespace std;
    static int total = 0;        // static local variable
    int count = str.length();               // automatic local variable

    cout << '\'' << str << "\' contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}