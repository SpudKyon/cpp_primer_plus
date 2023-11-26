//
// Created by dongdong on 2023/11/26.
//
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <input file1> <input file2> <output file>" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream fin1(argv[1]);
    std::ifstream fin2(argv[2]);
    std::ofstream fout(argv[3]);
    if (!fin1.is_open()) {
        std::cout << "Can't open " << argv[1] << std::endl;
        exit(EXIT_FAILURE);
    }
    if (!fin2.is_open()) {
        std::cout << "Can't open " << argv[2] << std::endl;
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open()) {
        std::cout << "Can't open " << argv[3] << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string a, b;
    bool flag1 = true, flag2 = true;
    while (flag1 && flag2) {
        if (getline(fin1, a))
            flag1 = true;
        else
            flag1 = false;
        if (getline(fin2, b))
            flag2 = true;
        else
            flag2 = false;

        if (flag1 && flag2)
            fout << a << " " << b << std::endl;
        else if (flag1)
            fout << a << std::endl;
        else if (flag2)
            fout << b << std::endl;
    }
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}