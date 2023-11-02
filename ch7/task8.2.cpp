//
// Created by spud on 23-10-26.
//
#include <iostream>

const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

struct Expenses {
    double data[Seasons];
};

// Function to modify the Expenses structure
void fill(Expenses* pa);

// Function to display the Expenses structure
void show(const Expenses* da);

int main() {
    Expenses expenses;
    fill(&expenses);
    show(&expenses);

    return 0;
}

void fill(Expenses* pa) {
    using namespace std;
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->data[i];
    }
}

void show(const Expenses* da) {
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << da->data[i] << endl;
        total += da->data[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
