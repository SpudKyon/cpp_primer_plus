//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstring>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void value(struct box b) {
    cout << "Maker: " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}

void address(struct box *b) {
    b->volume = b->height * b->length * b->width;

}

int main() {
    struct box b = {"Jeff", 0.44, 0.33, 0.66, 0.99};
    value(b);
    address(&b);
    value(b);
}