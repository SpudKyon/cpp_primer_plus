//
// Created by dongdong on 2023/11/26.
//
#include <iostream>
#include <fstream>


int main(int argc, char *argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;

    auto fileName = argv[1];
    std::ofstream fout;
    fout.open(fileName);

    cout << "Enter something: " << endl;
    char ch;
    while (cin.get(ch)) {
        if (ch == '\n')
            break;
        fout.put(ch);
    }
    fout.close();

}