//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

int main() {
    double eu_way;
    double us_way;

    cout << "Please your gasoline consumption in US style: ";
    cin >> us_way;

    eu_way = 3.875 * 62.14 / us_way;
    cout << "Fuel consumption in European style is: " << eu_way << endl;
}