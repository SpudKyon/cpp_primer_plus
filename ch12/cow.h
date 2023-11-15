//
// Created by dongdong on 2023/11/12.
//

#ifndef CH12_COW_H
#define CH12_COW_H


class Cow {
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();

    Cow(const char *nm, const char *ho, double wt);

    Cow(const Cow &c);

    ~Cow();

    Cow &operator=(const Cow &c);

    void ShowCow() const;  // display all cow data
};

#endif //CH12_COW_H
