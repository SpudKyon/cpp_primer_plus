//
// Created by dongdong on 2023/11/17.
//

#ifndef CH14_WORKER_H
#define CH14_WORKER_H

#include <string>

class Worker   // an abstract base class
{
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(const std::string &s, long n)
            : fullname(s), id(n) {}

    virtual ~Worker() {}

    virtual void Set();

    virtual void Show() const;
};

#endif //CH14_WORKER_H
