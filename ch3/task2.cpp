//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;
int main() {
    double feet;
    double inches;
    double weights;

    cout << "Please enter your height in feet: ";
    cin >> feet;

    cout << "Please enter your height in inches: ";
    cin >> inches;

    cout << "Please enter your weight in pounds: ";
    cin >> weights;

    double height = (feet * 12 + inches) * 0.0254;
    weights = weights / 2.2;

    cout << "Your BMI is: " << weights / (height * height) << "." << endl;
}
