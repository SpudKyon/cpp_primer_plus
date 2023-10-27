//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;


int main() {
    double distance;
    double petrol;

    cout << "Please enter how many kilometers you have driven: ";
    cin >> distance;
    cout << "Please enter how many liters petrol you have used: ";
    cin >> petrol;

    cout << "Fuel consumption is: " << petrol / distance * 100 << "l/km.";
}