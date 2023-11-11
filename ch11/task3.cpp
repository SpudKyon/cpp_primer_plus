//
// Created by spud on 23-10-26.
//
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect1.h"
#include <fstream>

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    double total;
    double pre = 0;
    double max;
    double min;
    // write to file
    ofstream fout;
    fout.open("walk.txt");

    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        // write to file
        fout << "Target Distance: " << target << ", ";
        fout << "Step Size: " << dstep << endl;

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            double temp = result.magval() - pre;
            total += temp;
            max = std::max(max, temp);
            min = std::min(min, temp);
            pre = temp;
            steps++;
        }
        fout << "Max: " << max << endl;
        fout << "Min: " << min << endl;
        fout << "Ave: " << total / steps << endl;
        fout << "After " << steps << " steps, the subject "
                                     "has the following location:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";

    return 0;
}