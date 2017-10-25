#pragma once
class Vector4
{
public:
	float mX;
	float mY;
	float mZ;
	float mW;

	Vector4();

	Vector4(float x, float y, float z, float w);

	Vector4 operator+(Vector4 &other);

	Vector4 operator-(Vector4 &other);

	Vector4 operator*(float &other);

	Vector4 Normalise();

	float Magnitude();
};