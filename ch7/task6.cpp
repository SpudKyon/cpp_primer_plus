//
// Created by spud on 23-10-26.
//

#include <iostream>

using namespace std;

int fill_array(double data[], int len) {
    int idx;
    for (idx = 0; idx < len; ++idx) {
        cout << "Please enter a double number: ";
        if (!(cin >> data[idx])) {
            break;
        }
    }
    return idx;
}

void show_array(double data[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << data[i] << " " ;
    }
    cout << endl;
}

void reverse_array(double data[], int len) {
    for (int i = 0; i < len / 2; ++i) {
        double tmp = data[i];
        data[i] = data[len - 1 - i];
        data[len - 1 - i] = tmp;
    }
    cout << endl;
}

int main() {
    int arrSize = 10;
    double arr[arrSize];
    arrSize = fill_array(arr, arrSize);
    show_array(arr, arrSize);
    reverse_array(arr + 1, arrSize - 2);
    show_array(arr, arrSize);

}