//
// Created by dongdong on 2023/11/15.
//

#ifndef CH13_CLASSIC_H
#define CH13_CLASSIC_H


#include "cd.h"

class Classic : public Cd {
private:
    char primaryworks[100];
public:
    Classic(char *w, char *s1, char *s2, int n, double x);

    Classic();

    virtual ~Classic() {};

    virtual void Report() const;

    virtual Classic &operator=(const Classic &d);
};


#endif //CH13_CLASSIC_H
