//
// Created by spud on 23-10-26.
//
#include <iostream>
#include "stock.h"

using namespace std;

int main() {
    Stack s1;
    cout << s1.isempty() << endl;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    Stack s2 = Stack(s1);
    cout << s1.isempty() << endl;
    Item item;
    cout << "What's in s1:" << endl;
    for (int i = 0; i < 3; ++i) {
        s1.pop(item);
        cout << item << endl;
    }
    Stack s3;
    s3 = s2;
    cout << "What's in s2:" << endl;
    for (int i = 0; i < 3; ++i) {
        s2.pop(item);
        cout << item << endl;
    }
    cout << "What's in s3:" << endl;
    for (int i = 0; i < 3; ++i) {
        s3.pop(item);
        cout << item << endl;
    }

    return 0;
}