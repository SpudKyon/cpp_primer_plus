//
// Created by dongdong on 2023/11/24.
//
#include <iostream>

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
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}