//
// Created by dongdong on 2023/11/26.
//
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <input file> <output file>" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream fin(argv[1]);
    std::ofstream fout(argv[2]);
    if (!fin.is_open()) {
        std::cout << "Can't open " << argv[1] << std::endl;
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open()) {
        std::cout << "Can't open " << argv[2] << std::endl;
        exit(EXIT_FAILURE);
    }
    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }
    fin.close();
    fout.close();
    return 0;
}