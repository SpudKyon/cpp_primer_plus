//
// Created by dongdong on 2023/11/18.
//

#include "person.h"
#include <iostream>

void Gunslinger::Show() const {
    std::cout << "Gunslinger: " << std::endl;
    std::cout << "draw time: " << draw_time << std::endl;
    std::cout << "notches: " << notches << std::endl;
}

int PokerPlayer::Draw() const {
    return rand() % 52 + 1;
}

void PokerPlayer::Show() const {
    std::cout << "PokerPlayer: " << std::endl;
}

void BadDude::Show() const {
    std::cout << "BadDude: " << std::endl;
    Gunslinger::Show();
    PokerPlayer::Show();
}
