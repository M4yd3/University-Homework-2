#include <ostream>
#ifndef VECTOR3D_H_
#define VECTOR3D_H_

class Vector3D {
public:
	double x{ 0 }, y{ 0 }, z{ 0 };

	Vector3D(double x, double y, double z) : x(x), y(y), z(z) {};

	~Vector3D() {};

	double magnitude();

	Vector3D normalized();

	Vector3D operator+(Vector3D& other);

	Vector3D operator-(Vector3D& other);

	Vector3D operator*(Vector3D& other);

	Vector3D operator*(double k);

	Vector3D operator/(double k);

	bool isCollinear(Vector3D& other);

	friend std::ostream& operator<<(std::ostream& out, const Vector3D& v);
};

#endif 