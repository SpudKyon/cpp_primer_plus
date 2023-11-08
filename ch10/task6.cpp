//
// Created by spud on 23-10-26.
//

#include <iostream>
#include "Move.h"


int main() {
    Move move1(1.0, 2.0);
    Move move2(3.0, 4.0);

    std::cout << "Move 1: ";
    move1.showmove();

    std::cout << "Move 2: ";
    move2.showmove();

    Move move3 = move1.add(move2);
    std::cout << "Move 3 (Move 1 + Move 2): ";
    move3.showmove();

    move1.reset();
    std::cout << "Move 1 after reset: ";
    move1.showmove();

    return 0;
}