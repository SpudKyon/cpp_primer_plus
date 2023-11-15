//
// Created by dongdong on 2023/11/15.
//

#ifndef CH13_CLASSIC1_H
#define CH13_CLASSIC1_H

#include "cd1.h"

class Classic : public Cd {
private:
    char *primaryWork;
public:
    Classic(char * s1, char * s2, char * s3, int n, double x);
    Classic();
    Classic(const Classic & d);
    ~Classic();
    void Report() const;  // reports all CD data
    Classic & operator=(const Classic & d);
};


#endif //CH13_CLASSIC1_H
