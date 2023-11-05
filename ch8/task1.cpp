#include <iostream>

using namespace std;

void print_string(string &address, int x = 0) {
    x = x == 0 ? 1 : x;
    for (int i = 0; i < x; ++i) {
        cout << address << endl;
    }
}

int main() {
    string str1 = "hello";
    print_string(str1);
    print_string(str1, 3);
}