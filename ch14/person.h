//
// Created by dongdong on 2023/11/18.
//

#ifndef CH14_PERSON_H
#define CH14_PERSON_H

#include <string>
#include <utility>

class Person {
private:
    std::string lname;
    std::string fname;

public:

    Person(): lname("none"), fname("none") {}
    Person(std::string ln, std::string fn): lname(std::move(ln)), fname(std::move(fn)) {}
    virtual ~Person()= default;
    virtual void Show() const = 0;
};

class Gunslinger: virtual public Person {
private:
    double draw_time;
    int notches;
public:
    Gunslinger(): Person(), draw_time(0), notches(0) {}
    Gunslinger(std::string ln, std::string fn, double dt, int n): Person(std::move(fn), std::move(ln)), draw_time(dt), notches(n) {}
    ~Gunslinger() override = default;
    double Draw() const { return draw_time; }
    void Show() const override;
};

class PokerPlayer: virtual public Person {
public:
    PokerPlayer(): Person() {}
    PokerPlayer(std::string ln, std::string fn): Person(std::move(ln), std::move(fn)) {}
    ~PokerPlayer() override = default;
    int Draw() const;
    void Show() const override;
};

class BadDude: public Gunslinger, public PokerPlayer {
public:
    BadDude(): Person(), Gunslinger(), PokerPlayer() {}
    BadDude(const std::string& ln, const std::string& fn, double dt, int n): Person(ln, fn), Gunslinger(ln, fn, dt, n), PokerPlayer(ln, fn) {}
    ~BadDude() override = default;
    double Gdraw() const { return Gunslinger::Draw(); }
    int Cdraw() const { return PokerPlayer::Draw(); }
    void Show() const override;
};


#endif //CH14_PERSON_H
