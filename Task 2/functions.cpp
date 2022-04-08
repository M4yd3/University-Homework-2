#include "functions.h"

void getInputSize(int& n) {
	std::cin >> n;
	if (n < 1) {
		std::cout << "Invalid input\n";
		std::cin.clear();
		std::cin.ignore();
		getInputSize(n);
	}
}

int getRandomInt() {
	return rand() % 201 - 100;
}

void randomFill(int* l, int size) {
	for (int i = 0; i < size; i++) l[i] = getRandomInt();
}

func* chooseAction() {
	std::cout << "Choose any action:\n";
	std::cout << "\t1. Remove minuses from array\n";
	std::cout << "\t2. Replace all elements with \"5\"\n";
	std::cout << "\t3. Replace all elements with random numbers from -100 to 100\n";
	std::cout << "\t4. Invert array\n";

	int n;
	std::cin >> n;

	switch (n) {
		case 1:
			return &removeMinuses;
		case 2:
			return &replaceWithFive;
		case 3:
			return &randomFill;
		case 4:
			return &invert;
		default:
			std::cout << "Invalid input\n";
			std::cin.clear();
			std::cin.ignore();
			return chooseAction();
	}
}

void removeMinuses(int* l, int size) {
	for (int i = 0; i < size; i++) if (l[i] < 0) l[i] = -l[i];
}

void replaceWithFive(int* l, int size) {
	for (int i = 0; i < size; i++) l[i] = 5;
}

void invert(int* l, int size) {
	for (int i = 0; i < size / 2; i++) {
		int t = l[i];
		l[i] = l[size - 1 - i];
		l[size - 1 - i] = t;
	}
}

void print(int* l, int size) {
	std::cout << "Array: [";
	for (int i = 0; i < size; i++) std::cout << l[i] << ", ";
	std::cout << "\b\b]\n";
}
