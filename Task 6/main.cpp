#include "main.h"

int main() {

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

void bubbleSort(Complex* list, int size) {
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
