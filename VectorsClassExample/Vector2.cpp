#include "Vector2.h"
#include <math.h>
Vector2::Vector2()
{
	mX = mY = 0;
}

Vector2::Vector2(float x, float y)
{
	mX = x;
	mY = y;
}

Vector2 Vector2::operator+(Vector2 &other)
{
	return Vector2(mX + other.mX, mY + other.mY);
}

Vector2 Vector2::operator-(Vector2 &other)
{
	return Vector2(mX - other.mX, mY - other.mY);
}

Vector2 Vector2::operator*(float &other)
{
	return Vector2(mX - other, mY - other);
}

Vector2 Vector2::Normalise()
{
	return Vector2(mX / Magnitude(), mY / Magnitude());
}

float Vector2::Magnitude()
{
	float mag = sqrt((mX * mX) + (mY * mY));
}