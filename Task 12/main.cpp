#include "main.h"

int main() {}

template <typename T>
void bubbleSort(T* list, int size) {
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