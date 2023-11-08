//
// Created by dongdong on 2023/11/8.
//

#ifndef CH10_LIST_H
#define CH10_LIST_H


typedef int Item;

class List {
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;
public:
    List() : top(0) {}
    bool isempty() const { return top == 0; }
    bool isfull() const { return top == MAX; }
    bool add(const Item & item);
    void visit(void (*pf)(Item &));
};

#endif //CH10_LIST_H
