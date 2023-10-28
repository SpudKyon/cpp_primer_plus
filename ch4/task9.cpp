//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

typedef struct {
    string brand;
    double weight;
    int calories;
} CandyBar;

int main() {
    CandyBar *snacks = new CandyBar[3]{{"Mocha Munch", 2.2, 350},
                                       {"others 1",    1.9, 400},
                                       {"other 2",     1.4, 300}};


    cout << "Brand: " << snacks[0].brand << endl;
    cout << "Weight: " << snacks[0].weight << endl;
    cout << "Calories: " << snacks[0].calories << endl;

    cout << "Brand: " << snacks[1].brand << endl;
    cout << "Weight: " << snacks[1].weight << endl;
    cout << "Calories: " << snacks[1].calories << endl;

    cout << "Brand: " << snacks[2].brand << endl;
    cout << "Weight: " << snacks[2].weight << endl;
    cout << "Calories: " << snacks[2].calories << endl;

}