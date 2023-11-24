//
// Created by dongdong on 2023/11/25.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>

enum size {
    SIZE = 10000000
};

int main() {
    using namespace std;
    vector<int> vi0(size::SIZE);
    vector<int> vi(size::SIZE);
    list<int> li(size::SIZE);
    for (int i = 0; i < size::SIZE; ++i) {
        vi0[i] = rand() % 1000;
        vi[i] = vi0[i];
        li.push_back(vi0[i]);
    }
    clock_t start = clock();
    sort(vi0.begin(), vi0.end());
    clock_t end = clock();
    cout << "vector sort time: " << (double) (end - start) / CLOCKS_PER_SEC << endl;
    start = clock();
    li.sort();
    end = clock();
    cout << "list sort time: " << (double) (end - start) / CLOCKS_PER_SEC << endl;
    li.clear();
    vi.clear();
    li = list<int>(vi0.begin(), vi0.end());
    start = clock();
    for (int i = 0; i < size::SIZE; ++i) {
        vi.push_back(li.front());
        li.pop_front();
    }
    sort(vi.begin(), vi.end());
    for (int i = 0; i < size::SIZE; ++i) {
        li.push_back(vi[i]);
    }
    end = clock();
    cout << "list to vector sort time: " << (double) (end - start) / CLOCKS_PER_SEC << endl;
}