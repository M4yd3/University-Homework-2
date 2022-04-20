#ifndef LAPTOP_H_
#define LAPTOP_H_

#include "screen.h"
#include "keyboard.h"

class Laptop : public Screen, public Keyboard {};

#endif
