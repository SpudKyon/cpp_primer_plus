//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {

    char ch[20];
    cout << "Enter words (q to quit): " << endl;
    cin >> ch;
    cin.get();
    int vowel, consonant, other;
    vowel = consonant = other = 0;
    while (strcmp(ch, "q") != 0) {
        if (isalpha(ch[0])) {
            char first = (char) tolower(ch[0]);
            if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                vowel++;
            } else {
                consonant++;
            }
        } else {
            other++;
        }
        cin >> ch;
    }
    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonant" << endl;
    cout << other << " others" << endl;

}