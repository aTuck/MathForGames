#pragma once

class Vector3
{
public:
	float mX;
	float mY;
	float mZ;

	Vector3();

	Vector3(float x, float y, float z);

	Vector3 operator+(Vector3 &other);

	Vector3 operator-(Vector3 &other);

	Vector3 operator*(float &other);

	Vector3 Normalise();

	float Magnitude();
};