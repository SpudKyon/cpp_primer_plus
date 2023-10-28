//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calories;
} ;

int main() {

    struct CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;
}