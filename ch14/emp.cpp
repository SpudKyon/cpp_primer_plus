//
// Created by dongdong on 2023/11/22.
//

#include "emp.h"

abstr_emp::abstr_emp() : fname("none"), lname("none"), job("none") {}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln,
                     const std::string &j) : fname(fn), lname(ln), job(j) {}

abstr_emp::abstr_emp(const abstr_emp &e) : fname(e.fname), lname(e.lname), job(e.job) {}

void abstr_emp::ShowAll() const {
    std::cout << "First name: " << fname << std::endl;
    std::cout << "Last name: " << lname << std::endl;
    std::cout << "Job: " << job << std::endl;
}

void abstr_emp::SetAll() {
    std::cout << "Enter first name: ";
    std::cin >> fname;
    std::cout << "Enter last name: ";
    std::cin >> lname;
    std::cout << "Enter job: ";
    std::cin >> job;
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e) {
    os << e.fname << " " << e.lname << ", " << e.job;
    return os;
}

abstr_emp::~abstr_emp() {}

employee::employee() : abstr_emp() {}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {
    abstr_emp::SetAll();
}

manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j),
                                                                                                inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager &m) : abstr_emp(m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "Inchargeof: " << inchargeof << std::endl;
}

void manager::SetAll() {
    abstr_emp::ShowAll();
    std::cout << "Enter inchargeof: ";
    std::cin >> inchargeof;
}

fink::fink() : abstr_emp() {}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo)
        : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink &e) : abstr_emp(e), reportsto(e.reportsto) {}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "Reportsto: " << reportsto << std::endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    std::cout << "Enter reportsto: ";
    std::cin >> reportsto;
}

highfink::highfink() : manager(), fink() {}

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo,
                   int ico) : manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink &f, int ico) : manager(f, ico), fink(f) {}

highfink::highfink(const manager &m, const std::string &rpo) :abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink &h):abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const {
    manager::ShowAll();
    std::cout << "Reportsto: " << ReportsTo() << std::endl;
}

void highfink::SetAll() {
    manager::SetAll();
    std::cout << "Enter reportsto: ";
    std::cin >> ReportsTo();
}
