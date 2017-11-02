#pragma once

class Matrix2
{
private:
	float *mMat;
public:
	Matrix2();

	Matrix2(float* mat);

	Matrix2(float a, float b, float c, float d);

	Matrix2 operator+(Matrix2 &other);

	Matrix2 operator-(Matrix2 &other);

	Matrix2 operator*(Matrix2 &other);
};