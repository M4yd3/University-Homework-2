#include "circle.h"

double Circle::circumference() {
	return 2 * M_PI * r;
}

double Circle::area() {
	return M_PI * r * r;
}

std::ostream& operator<<(std::ostream& out, const Circle& c) {
	return out << "Circle{ " << c.r << " }";	
}
