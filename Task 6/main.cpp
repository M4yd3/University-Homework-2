#include <iostream>
#include "main.h"

int main() {
	cout << "Enter array size: ";
	int n;
	cin >> n;

	if (!cin || n < 1) return -1;

	int* listInt = new int[n];
	cout << "\nFill int array: \n";
	fill(listInt, n);

	cout << "Unsorted int array: \n";
	print(listInt, n);

	bubbleSort(listInt, n);

	cout << "Sorted int array: \n";
	print(listInt, n);

	double* listDouble = new double[n];
	cout << "\nFill double array: \n";
	fill(listDouble, n);

	cout << "Unsorted double array: \n";
	print(listDouble, n);

	bubbleSort(listDouble, n);

	cout << "Sorted double array: \n";
	print(listDouble, n);
}

void bubbleSort(int* list, int size) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (list[i] > list[i + 1]) {
				swap(list[i], list[i + 1]);
				flag = true;
			}
		}
	}
}

void bubbleSort(double* list, int size) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (list[i] > list[i + 1]) {
				swap(list[i], list[i + 1]);
				flag = true;
			}
		}
	}
}

template<typename T>
void fill(T* list, int size) {
	for (int i = 0; i < size; i++) {
		T x;
		cout << "[" << i << "] = ";
		cin >> x;

		if (!cin) {
			i--;
			continue;
		}

		list[i] = x;
	}
}

template<typename T>
void print(T* list, int size) {
	cout << "[";
	for (int i = 0; i < size; i++) {
		cout << list[i] << ", ";
	}
	cout << "\b\b]" << endl;
}