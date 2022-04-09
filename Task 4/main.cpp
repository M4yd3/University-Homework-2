#include "main.h"

int main() {
	double a(4.6), b(1.5), t, y;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	string output = function_y(a, b);
	
	if (output == "error") {
		cout << "Unable to calculate y";
		return -1;
	}

	y = stod(output);
	cout << "y = " << y << endl;
	output = function_t(a, b, y);

	if (output == "error") {
		cout << "Unable to calculate t";
		return -1;
	}

	t = stod(output);

	cout << "t = " << t << endl;
}

string function_y(double a, double b) {
	double y(0);
	if (a <= b) {
		double den1 = a + b;
		double den2 = a * a - a * b + b * b;

		if (den1 == 0 || den2 == 0) return "error";

		y = ((a * a - b * b) / (den1 * den2));
	} else {
		if (b == 0) return "error";
		y = a + log(b * b);
	}
	return to_string(y);
}

string function_t(double a, double b, double y) {
	double t(0);
	if (y == b) {
		double root1 = y * y - a;
		double root2 = a * a - y;
		if (root1 < 0 || root2 < 0) return "error";

		double den = 2 * b - sqrt(root2);
		if (den == 0) return "error";

		t = (2 * y + sqrt(root1)) / den;
	} else if (y < b) {
		double den = tan(a - b);
		if (den == 0) return "error";

		t = pow(sin(y), 2) + (1 / den);
	} else {
		double root = y * cos(b);
		if (root <= 0) return "error";

		t = cbrt(y * sin(a)) + (1 / sqrt(root));
	}
	return to_string(t);
}
