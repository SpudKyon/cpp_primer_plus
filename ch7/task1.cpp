#include <iostream>

using namespace std;

double harmonic_mean(int x, int y) {
    return 2.0 * x * y / (x + y);
}

int main() {
    int x, y;
    cout << "Please enter two numbers: ";
    cin >> x;
    cin >> y;
    while (x != 0 && y != 0) {
        cout << "Mean: " << harmonic_mean(x, y) << endl;
        cout << "Please enter two number: ";
        cin >> x;
        cin >> y;
    }
}