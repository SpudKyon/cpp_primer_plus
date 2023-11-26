//
// Created by dongdong on 2023/11/26.
//
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter a sentence with a '$' in it: " << endl;
    int ct = 0;
    char ch;
    while ((ch = cin.get()) != '$')
        ct++;
    // put $ back to stream
    cin.putback(ch);
    std::string str;
    cin >> str;

    cout << "There are " << ct << " characters before $" << endl;
    cout << "There are '" << str << "' left in input." << endl;

    return 0;
}