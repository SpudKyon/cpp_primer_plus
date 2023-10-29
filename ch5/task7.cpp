//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

typedef struct {
    string make;
    int date;
} Car;

int main() {
    int len;
    cout << "How many cars do you wish to catalog? ";
    cin >> len;
    cin.ignore(); // remove \n in buffer.
    Car *cars = new Car[len];
    for (int i = 0; i < len; ++i) {
        cout << "Car #" << i + 1 << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year made: ";
        cin >> cars[i].date;
        cin.ignore();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < len; ++i) {
        cout << cars[i].make << " " << cars[i].date << endl;
    }
}