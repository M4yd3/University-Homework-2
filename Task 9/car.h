#ifndef CAR_H_
#define CAR_H_

#include "property.h"

class Car : public Property {
public:
    Car(double worth) : Property(worth) {};

    double tax() override;
};

#endif
