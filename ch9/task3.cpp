//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <new>
#include <cstring>

const int BUF = 512;
const int N = 2;
char buffer[BUF];  // static array for buffer
struct chaff {
    char dross[20];
    int slag;
};

int main() {
    using namespace std;

    chaff *pc1, *pc2;
    cout << "Calling new and placement new:\n";
    pc1 = new chaff[N];             // use heap
    pc2 = new(buffer) chaff[N];     // use buffer array

    for (int i = 0; i < N; i++) {
        strcpy(pc1[i].dross, "Heap");
        pc1[i].slag = i;
        strcpy(pc2[i].dross, "Buffer");
        pc2[i].slag = i;
    }
    cout << "Memory addresses:\n" << "  heap: " << pc1
         << "  static: " << (void *) buffer << endl;
    cout << "Memory contents:\n";


    for (int i = 0; i < N; i++) {
        cout << pc1[i].dross << " at " << &(pc1[i].dross) << "; ";
        cout << pc2[i].dross << " at " << &(pc2[i].dross) << endl;
    }

    delete[] pc1;

    return 0;
}
