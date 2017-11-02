#include "Vector4.h"
#include <math.h>
Vector4::Vector4()
{
	mX = mY = mZ = mW = 0;
}

Vector4::Vector4(float x, float y, float z, float w)
{
	mX = x;
	mY = y;
	mZ = z;
	mW = w;
}

Vector4 Vector4::operator+(Vector4 &other)
{
	return Vector4(mX + other.mX, mY + other.mY, mZ + other.mZ, mW + other.mW);
}

Vector4 Vector4::operator-(Vector4 &other)
{
	return Vector4(mX - other.mX, mY - other.mY, mZ - other.mZ, mW - other.mW);
}

Vector4 Vector4::operator*(float &other)
{
	return Vector4(mX * other, mY * other, mZ * other, mW * other);
}

Vector4 Vector4::Normalise()
{
	return Vector4(mX / Magnitude(), mY / Magnitude(), mZ / Magnitude(), mW / Magnitude());
}

float Vector4::Magnitude()
{
	float mag = sqrt((mX * mX) + (mY * mY) + (mZ * mZ) + (mW * mW));
	return mag;
}