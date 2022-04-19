#include "property.h"
#include "apartment.h"
#include "car.h"
#include "country_house.h"
#include <iostream>

using namespace std;

int main() {
    Property* p[7]{};

    for (int i = 0; i < 7; i++) {
        if (i < 3) p[i] = new Apartment(1000 * (i + 1));
        if (2 < i &&  i < 5) p[i] = new Car(200 * (i + 1));
        if (4 < i && i < 7) p[i] = new CountryHouse(500 * (i + 1));
    }

    for (int i = 0; i < 7; i++) {
        cout << p[i]->tax() << endl;
    }

    for (int i = 0; i < 7; i++) delete p[i];
}