#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>

using namespace std;

void bubbleSort(int* list, int size);

void bubbleSort(double* list, int size);

template <typename T>
void fill(T* list, int size);

template <typename T>
void print(T* list, int size);

#endif
