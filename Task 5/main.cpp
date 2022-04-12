#include "main.h"

int main() {
	srand(time(0));
	int n, m;
	cout << "Enter list height: ";
	cin >> n;
	cout << "Enter list width: ";
	cin >> m;

	if (!cin || n < 1 || m < 1) return -1;
	int** list = new int* [n];
	for (int i = 0; i < n; i++) list[i] = new int[m];

	fill(list, n, m);

	print(list, n, m);

	for (int i = 0; i < n; i++) delete[] list[i];
	delete[] list;
}

void fill(int** list, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			list[i][j] = rand() % 41 + 10;
		}
	}
}

void print(int** list, int n, int m) {
	cout << "[\n";
	for (int i = 0; i < n; i++) {
		cout << "[";
		for (int j = 0; j < m; j++) {
			cout << list[i][j] << ", ";
		}
		cout << "\b\b],\n";
	}
	cout << "]" << endl;
}

