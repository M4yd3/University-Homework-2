#ifndef CIRCLE_H_
#define CIRCLE_H_

#define _USE_MATH_DEFINES
#include<cmath>
#include <ostream>

class Circle {
public:
	double r{ 0 };

	Circle(double r) : r(r) {};

	~Circle() {};

	double circumference();

	double area();

	friend std::ostream& operator<<(std::ostream& out, const Circle& c);
};

#endif 