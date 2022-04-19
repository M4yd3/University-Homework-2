#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <ostream>

struct Complex {
	double re{ 0 }, im{ 0 };

	Complex(double re, double im) : re(re), im(im) {};

	~Complex() {};

	Complex operator+(Complex& other);

	Complex operator-(Complex& other);

	Complex operator*(Complex& other);

	Complex operator/(Complex& other);

	Complex operator!();

	double abs();

	friend std::ostream& operator<< (std::ostream& out, const Complex& complex);
};

#endif