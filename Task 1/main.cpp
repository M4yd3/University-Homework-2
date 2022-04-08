#include <iostream>
#include <fstream>
#include <regex>
#include "complex.h"

using namespace std;

int main() {
	ifstream file("complex.txt");
	string input;

	getline(file, input);
	int n = stoi(input);
	Complex m;

	cout << "Complex numbers in file:" << endl;

	for (int i = 0; i < n; i++) {
		getline(file, input);
		input = regex_replace(input, regex(" "), "");

		smatch match;
		regex r = regex(R"(^(-?(?:\d+(?:\.\d+)?|\.\d+))(?:([+-](?:\d+(?:\.\d+)?|\.\d+))i)?$)");

		regex_match(input, match, r);

		double re(0), im(0);
		if (match[1] != "") re = stod(match[1]);
		if (match[2] != "") im = stod(match[2]);

		Complex c = {re, im};
		cout << c << endl;

		if (i == 1 || m.abs() < c.abs()) m = c;
	}

	cout << "Complex number with maximum absolute: " << m;
}