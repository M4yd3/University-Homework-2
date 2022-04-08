#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <stdlib.h>

typedef void (func)(int* l, int size);

void getInputSize(int& n);

int getRandomInt();

void randomFill(int* l, int size);

func* chooseAction();

void removeMinuses(int* l, int size);

void replaceWithFive(int* l, int size);

void invert(int* l, int size);

void print(int* l, int size);

#endif
