//
// Created by dongdong on 2023/11/25.
//
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

std::vector<int> Lotto(int total, int select);

int main() {
    using namespace std;
    vector<int> winners;
    winners = Lotto(51, 6);
    for_each(winners.begin(), winners.end(), [](int i) { cout << i << " "; });
    cout << endl;
    return 0;
}

std::vector<int> Lotto(int total, int select) {
    std::vector<int> result;
    for (int i = 1; i <= total; ++i) {
        result.push_back(i);
    }
    std::shuffle(result.begin(), result.end(), std::mt19937(std::random_device()()));
    result.resize(select);
    return result;
}