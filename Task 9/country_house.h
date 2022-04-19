#ifndef COUNTRY_HOUSE_H_
#define COUNTRY_HOUSE_H_

#include "property.h"

class CountryHouse : public Property {
public:
    CountryHouse(double worth) : Property(worth) {};

    double tax() override;
};

#endif
