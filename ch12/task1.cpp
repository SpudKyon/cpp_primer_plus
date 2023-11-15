#include <iostream>
#include "cow.h"

int main() {
    using namespace std;
    Cow cow1 = Cow();
    cout << "cow1: " << endl;
    cow1.ShowCow();

    Cow cow2 = Cow("niuniu", "niu", 66);
    cow2.ShowCow();

    cow1 = cow2;
    cow1.ShowCow();

    Cow cow3 = Cow(cow2);
    cow3.ShowCow();
}