#ifndef BOSS_H_
#define BOSS_H_

#include "human.h"

class Boss : public Human {
public:
    Boss() : Human() {};

    Boss(std::string surname, std::string name, std::string midname, int age, int number_of_workers)
        : Human(surname, name, midname, age), number_of_workers(number_of_workers) {};

    void print() override;

private:
    int number_of_workers{};
};

#endif