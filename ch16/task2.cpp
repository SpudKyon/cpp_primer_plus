//
// Created by dongdong on 2023/11/24.
//
#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string &str);

int main() {
    std::string str;
    std::cout << "Enter a string (q to quit): ";
    while (std::getline(std::cin, str) && str != "q") {
        std::cout << str << " is " << (isPalindrome(str) ? "" : "not ") << "a palindrome\n";
        std::cout << "Enter a string (q to quit): ";
    }
    std::cout << "Bye.\n";
    return 0;
}

bool isPalindrome(const std::string &str) {
    std::string tmp;
    for (char ch : str) {
        if (isalpha(ch)) {
            tmp.push_back(tolower(ch));
        }
    }
    std::string rev(tmp.rbegin(), tmp.rend());
    return rev == tmp;
}