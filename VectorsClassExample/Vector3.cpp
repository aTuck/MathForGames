#include "Vector3.h"
#include <math.h>
Vector3::Vector3()
{
	mX = mY = mZ = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	mX = x;
	mY = y;
	mZ = z;
}

Vector3 Vector3::operator+(Vector3 &other)
{
	return Vector3(mX + other.mX, mY + other.mY, mZ + other.mZ);
}

Vector3 Vector3::operator-(Vector3 &other) 
{
	return Vector3(mX - other.mX, mY - other.mY, mZ - other.mZ);
}

Vector3 Vector3::operator*(float &other)
{
	return Vector3(mX * other, mY * other, mZ * other);
}

Vector3 Vector3::Normalise()
{
	return Vector3(mX / Magnitude(), mY / Magnitude(), mZ / Magnitude());
}

float Vector3::Magnitude()
{
	float mag = sqrt((mX * mX) + (mY * mY) + (mZ * mZ));
}