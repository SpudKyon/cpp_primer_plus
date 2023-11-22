//
// Created by dongdong on 2023/11/17.
//

#ifndef CH14_WINE_H
#define CH14_WINE_H

#include <valarray>
#include <string>
#include "pair.h"


class Wine : public Pair<std::valarray<int>, std::valarray<int>> {
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    int years;
public:
    // initialize label to l, number of years to y,
    // vintage years to yr[], bottles to bot[]
    Wine(const char *l, int y, const int yr[], const int bot[]);

    // initialize label to l, number of years to y,
    // create array objects of length y
    Wine(const char *l, int y);

    void GetBottles();

    const std::string &Label() const;

    int sum() const;

    void Show() const;

};


#endif //CH14_WINE_H
