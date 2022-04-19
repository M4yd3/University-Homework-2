#ifndef STUDENT_H_
#define STUDENT_H_

#include "human.h"

class Student : public Human {
public:
    Student() : Human() {};

    Student(std::string surname, std::string name, std::string midname, int age, bool on_lesson)
        : Human(surname, name, midname, age), on_lesson(on_lesson) {};

    void print() override;

private:
    bool on_lesson{};
};

#endif