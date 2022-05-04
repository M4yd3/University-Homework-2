#include "complex.h"

Complex Complex::operator+(Complex& other) {
	return { re + other.re, im + other.im };
}

Complex Complex::operator-(Complex& other) {
	return { re - other.re, im - other.im };
}

Complex Complex::operator*(Complex& other) {
	return { re * other.re - im * other.im, re * other.im + im * other.re };
}

Complex Complex::operator/(Complex& other) {
	Complex num = { re * other.re + im * other.im, im * other.re - re * other.im };
	double denom = pow(other.re, 2) + pow(other.im, 2);
	return { num.re / denom, num.im / denom };
}

bool Complex::operator>(Complex& other) {
	if (this->re == other.re) return this->im > other.im;
	return this->re > other.re;
}

Complex Complex::operator!() {
	return { re, -im };
}

double Complex::abs() {
	return pow(re, 2) + pow(im, 2);
}

std::ostream& operator<<(std::ostream& out, const Complex& c) {
	if (c.re != 0) {
		out << (c.re < 0 ? "-" : "");
		if (c.re == (int)c.re) {
			out << abs((int)c.re);
		} else {
			out << abs(c.re);
		}
	}
	if (c.im != 0) {
		out << (c.im < 0 ? "-" : "+");
		if (c.im == (int)c.im) {
			out << abs((int)c.im);
		} else {
			out << abs(c.im);
		}
		out << "i";
	}
	return out;
}