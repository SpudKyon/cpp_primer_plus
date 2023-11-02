//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <array>

using namespace std;

int input(int data[], int max) {
    int idx = 0;
    cout << "Please enter maximum 10 times golf's score(-1 to quit): ";
    while (idx < max) {
        cin >> data[idx];
        if ((char )data[idx] == -1)
            break;
        idx++;
    }
    return idx;
}

double getAverage(const int data[], int len) {
    double sum = 0.0;
    for (int i = 0; i < len; ++i) {
        sum += data[i];
    }
    return sum / len;
}

void output(int data[], int len) {
    cout << "Scores: ";
    for (int i = 0; i < len; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {

    int maxSize = 10;
    int score[maxSize];
    int len = input(score, maxSize);
    cout << "Average: " << getAverage(score, len) << endl;
    output(score, len);
}
