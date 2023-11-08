//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_PLORG_H
#define CH10_PLORG_H


class Plorg {
private:
    char name[20];
    int CI;
public:
    Plorg(char n[] = "Plorga", int ci = 50);

    void setCI(int ci);

    void show();

};


#endif //CH10_PLORG_H
