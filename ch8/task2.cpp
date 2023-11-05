//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>

using namespace std;

typedef struct {
    string brand;
    double weight;
    int calories;
} CandyBar;

void setCandyBar(CandyBar &candy, const char *brand = "Millennium Munch", double weight = 2.85, int calories = 350) {
    candy.brand = brand;
    candy.weight = weight;
    candy.calories = calories;
}

void displayCandyBar(const CandyBar &candy) {
    std::cout << "Brand: " << candy.brand << std::endl;
    std::cout << "Weight: " << candy.weight << std::endl;
    std::cout << "Calories: " << candy.calories << std::endl;
}

int main() {
    CandyBar candy;
    setCandyBar(candy);
    displayCandyBar(candy);

    setCandyBar(candy, "MM", 2.3, 3);
    displayCandyBar(candy);
}
