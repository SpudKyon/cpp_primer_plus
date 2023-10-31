#include <iostream>
#include <cctype>

using namespace std;

int main() {
    cout << "Please enter a character('@' to quit): ";
    char ch;
    cin.get(ch);
    while (ch != '@') {
        if (isdigit(ch)) {
            continue;
        } else if (isupper(ch)) {
            ch = tolower(ch);
        } else if (islower(ch)) {
            ch = toupper(ch);
        }
        cout << ch << endl;
        cout << "Please enter a character('@' to quit): ";
        cin >> ch;
    }

}