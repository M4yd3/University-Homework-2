#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <ostream>

struct Complex {
	double re, im;

	Complex operator+(Complex& other);

	Complex operator-(Complex& other);

	Complex operator*(Complex& other);

	Complex operator/(Complex& other);

	bool operator>(Complex& other);

	Complex operator!();

	double abs();

	friend std::ostream& operator<< (std::ostream& out, const Complex& complex);
};

#endif