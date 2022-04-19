#ifndef HUMAN_H_
#define HUMAN_H_

#include <string>

class Human {
public:
    Human() {};

    Human(std::string surname, std::string name, std::string midname, int age)
        : surname(surname), name(name), midname(midname), age(age) {};

    virtual void print() = 0;

    ~Human() {};

private:
    std::string surname{};
    std::string name{};
    std::string midname{};
    int age{};
};

#endif