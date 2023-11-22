//
// Created by dongdong on 2023/11/17.
//
#include "wine1.h"

Wine::Wine(const char *l, int y, const int *yr, const int *bot) :
        Pair<ArrayInt, ArrayInt>(ArrayInt(yr, y), ArrayInt(bot, y)) {
    label = l;
    years = y;
}

Wine::Wine(const char *l, int y) : Pair<ArrayInt, ArrayInt>(ArrayInt(y), ArrayInt(y)) {
    label = l;
    years = y;
}

void Wine::GetBottles() {
    std::cout << "Enter " << label << " data for " << years << " year(s):\n";
    for (int i = 0; i < years; ++i) {
        std::cout << "Enter year: ";
        std::cin >> PairArray::first()[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> PairArray::second()[i];
    }
}

const std::string &Wine::Label() const {
    return label;
}

int Wine::sum() const {
    return PairArray::second().sum();
}

void Wine::Show() const {
    std::cout << "Wine: " << label << std::endl;
    std::cout << "\tYear\tBottles\n";
    ArrayInt first = PairArray::first();
    ArrayInt second = PairArray::second();
    for (int i = 0; i < years; ++i) {
        std::cout << "\t" << first[i] << "\t" << second[i] << std::endl;
    }
}