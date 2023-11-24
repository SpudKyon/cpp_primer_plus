//
// Created by dongdong on 2023/11/25.
//
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    using namespace std;
    vector<string> mat;
    vector<string> pat;
    vector<string> result;
    string temp;
    cout << "Enter Mat's friends: (q to quit)" << endl;
    while (cin >> temp && temp != "q") {
        mat.push_back(temp);
        result.push_back(temp);
    }
    cout << "Enter Pat's friends: (q to quit)" << endl;
    while (cin >> temp && temp != "q") {
        pat.push_back(temp);
        result.push_back(temp);
    }
    sort(result.begin(), result.end());
    auto a = unique(result.begin(), result.end());

    cout << "Mat's friends: ";
    for_each(mat.begin(), mat.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
    cout << "Pat's friends: ";
    for_each(pat.begin(), pat.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
    cout << "All friends: ";
    for_each(result.begin(), a, [](const string &s) { cout << s << " "; });

}