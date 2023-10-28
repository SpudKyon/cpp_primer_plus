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
    CandyBar snacks[3] = {{"Mocha Munch", 2.2, 350},
                          {"others 1",1.9, 400},
                          {"other 2", 1.4, 300}};
    for (const auto &snack: snacks) {
        cout << "Brand: " << snack.brand << endl;
        cout << "Weight: " << snack.weight << endl;
        cout << "Calories: " << snack.calories << endl;
    }
}