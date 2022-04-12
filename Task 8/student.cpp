#include "Student.h"

Student::Student() {}

Student::Student(std::string firstName, std::string lastName, std::string birthDate, std::string group) {
	this->firstName_ = firstName;
	this->lastName_ = lastName;
	this->birthDate_ = birthDate;
	this->group = group;
}

std::ostream& operator<<(std::ostream& out, const Student& s) {
	out << "Student(Name: " << s.lastName_ << " " << s.firstName_;
	out << ", Date of birth: " << s.birthDate_;
	out << ", Group: " << s.group << ")";
	return out;
}

std::istream& operator>>(std::istream& in, Student& s) {
	std::cout << "First name: ";
	in >> s.firstName_;
	std::cout << "Last name: ";
	in >> s.lastName_;
	std::cout << "Date of birth: ";
	in >> s.birthDate_;
	std::cout << "Group: ";
	in >> s.group;
	return in;
}

Student& Student::operator=(const Student& other) {
	if (this != &other) {
		firstName_ = other.firstName_;
		lastName_ = other.firstName_;
		birthDate_ = other.birthDate_;
		group = other.group;
	}
	return *this;
}
