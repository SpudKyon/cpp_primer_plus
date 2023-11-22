//
// Created by dongdong on 2023/11/17.
//

#include "wine.h"
#include <iostream>

Wine::Wine(const char *l, int y, const int *yr, const int *bot) {
    label = l;
    years = y;
    data.first() = ArrayInt(yr, y);
    data.second() = ArrayInt(bot, y);

}

Wine::Wine(const char *l, int y) {
    label = l;
    years = y;
    data.first() = ArrayInt(y);
    data.second() = ArrayInt(y);
}

void Wine::GetBottles() {
    using namespace std;
    cout << "Enter " << label << " data for " << years << " year(s):\n";
    for (int i = 0; i < years; ++i) {
        cout << "Enter year: ";
        cin >> data.first()[i];
        cout << "Enter bottles for that year: ";
        cin >> data.second()[i];
    }
}

const std::string &Wine::Label() const {
    return label;
}

int Wine::sum() const {
    return data.second().sum();
}

void Wine::Show() const {
    using namespace std;
    cout << "Wine: " << label << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < years; ++i) {
        cout << "\t" << data.first()[i] << "\t" << data.second()[i] << endl;
    }

}
