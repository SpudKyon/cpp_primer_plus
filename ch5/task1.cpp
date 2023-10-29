#include <iostream>

using namespace std;

int main() {
    int start;
    int end;
    long sum = 0;
    cout << "Please enter the number to start:";
    cin >> start;
    cout << "Please enter the number to end:";
    cin >> end;

    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    cout << "Sum of numbers between start and end:";
    cout << sum << endl;
}