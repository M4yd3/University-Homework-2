#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <fstream>

class Student {
private:
	std::string firstName_;
	std::string lastName_;
	std::string birthDate_;

public:
	std::string group;

	Student();

	Student(std::string firstName, std::string lastName, std::string birthDate, std::string group);

	Student& operator=(const Student& other);

	const std::string& firstName() const { return firstName_; };

	const std::string& lastName() const { return lastName_; };

	const std::string& birthDate() const { return birthDate_; };

	friend std::ostream& operator<<(std::ostream& out, const Student& s);

	friend std::istream& operator>>(std::istream& in, Student& s);
};

#endif

