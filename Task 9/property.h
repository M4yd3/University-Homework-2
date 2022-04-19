#ifndef PROPERTY_H_
#define PROPERTY_H_

class Property {
public:
    double worth{ 0 };

    Property(double worth) : worth(worth) {};

    virtual double tax() = 0;
};

#endif


