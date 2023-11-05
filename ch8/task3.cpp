//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>

using namespace std;

void toupper(string &str) {
    for (char &ch: str) {
        ch = std::toupper(ch);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string (q to quit): ";
    while (std::getline(std::cin, input) && input != "q") {
        toupper(input);
        std::cout << input << std::endl;
        std::cout << "Next string (q to quit): ";
    }
    std::cout << "Bye." << std::endl;

    return 0;
}