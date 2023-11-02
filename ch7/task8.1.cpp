//
// Created by spud on 23-10-26.
//
#include <iostream>

const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
double expenses[Seasons];

// Function to modify the expenses array
void fill(double* pa);

// Function to display the expenses array
void show(const double da[], int n);

int main() {
    fill(expenses);
    show(expenses, Seasons);

    return 0;
}

void fill(double* pa) {
    using namespace std;
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(const double da[], int n) {
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < n; i++) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
