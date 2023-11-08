//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_GOLF_H
#define CH10_GOLF_H


const int Len = 40;

class Golf {
private:
    char fullname[Len];
    int handicap;
public:
    Golf();

    Golf(const char *name, int hc);

    void setHandicap(int hc);

    void show();
};


#endif //CH10_GOLF_H
