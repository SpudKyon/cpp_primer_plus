//
// Created by spud on 23-10-26.
//
#include <iostream>

using namespace std;


int main() {
    long long total;
    long long portion;

    cout << "Enter the world's population: ";
    cin >> total;

    cout << "Enter the population of the US: ";
    cin >> portion;

    cout << "The population of the US is " << portion * 100.0 / total << "% of the world's population." << endl;
}