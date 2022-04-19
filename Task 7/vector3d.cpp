#include "vector3d.h"

double Vector3D::magnitude() {
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

Vector3D Vector3D::normalized() {
	double k = 1 / magnitude();
	return { x * k, y * k, z * k };
}

Vector3D Vector3D::operator+(Vector3D& other) {
	return { x + other.x, y + other.y, z + other.z };
}

Vector3D Vector3D::operator-(Vector3D& other) {
	return { x - other.x, y - other.y, z - other.z };
}

Vector3D Vector3D::operator*(Vector3D& other) {
	return { x * other.x, y * other.y, z * other.z };
}

Vector3D Vector3D::operator*(double k) {
	return { x * k, y * k, z * k };
}

Vector3D Vector3D::operator/(double k) {
	return { x / k, y / k, z / k };
}

bool Vector3D::isCollinear(Vector3D& other) {
	return (x / other.x) == (y / other.y) && (y / other.y) == (z / other.z);
}

std::ostream& operator<<(std::ostream& out, const Vector3D& v) {
	return out << "Vector3D{" << v.x << ", " << v.y << ", " << v.z << "}";
}
