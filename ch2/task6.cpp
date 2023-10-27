//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

double light(double lightYear) {
    return lightYear * 63240;
}

int main() {
    double lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;
    double asUnit = light(lightYear);
    cout << lightYear << " light years = " << asUnit << " astronomical units." << endl;
}