//
// Created by dongdong on 2023/11/15.
//

#ifndef CH13_CD_H
#define CH13_CD_H


class Cd {  // represents a CD disk
private:
    char performers[50];
    char label[20];
    int selections;   // number of selections
    double playtime;  // playing time in minutes
public:
    Cd(char *s1, char *s2, int n, double x);

    Cd(const Cd &d);

    Cd();

    virtual ~Cd();

    virtual void Report() const;  // reports all CD data
    virtual Cd &operator=(const Cd &d);
};

#endif //CH13_CD_H
