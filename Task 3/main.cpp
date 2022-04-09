#include <iostream>
#include "circle.h"
#include "vector3d.h"

using namespace std;

int main() {
	Circle circle = { 3 };
	cout << circle << endl;

	Vector3D a = { 1, 1, 1 }, b = { 3, -5, 4 };
	cout << a + b << endl;
	cout << b / 4 << endl;
	cout << a.isCollinear(b) << endl;
}