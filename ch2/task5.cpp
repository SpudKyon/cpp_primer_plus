//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

double temperature(double celsius) {
    return 1.8 * celsius + 32.0 ;
}

int main() {
    int celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    int f = temperature(celsius);
    cout << celsius << " degree is " << f << " degree in Fahrenheit." << endl;

}