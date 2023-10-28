//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;

typedef struct  {
    string company;
    double diameter;
    double weight;
} pizza_company;

int main() {

    pizza_company pizza;
    cout << "Please enter the company's name:";
    getline(cin, pizza.company);
    cout << "Please enter the diameter of pizza:";
    cin >> pizza.diameter;
    cout << "Please enter the weight of pizza:";
    cin >> pizza.weight;

    cout << "company: " << pizza.company << endl;
    cout << "diameter: " << pizza.diameter << endl;
    cout << "weight: " << pizza.weight << endl;
}