#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

using namespace std;

int main() {
	srand(time(0));

	cout << "Input array size: ";
	int n;
	getInputSize(n);

	int* list = new int[n];

	randomFill(list, n);
	print(list, n);

	while (true) {
		func* action = chooseAction();
		action(list, n);
		print(list, n);
	}

	delete[] list;
}
