#pragma once

class Matrix3
{
private:
	float *mMat;
public:
	Matrix3();

	Matrix3(float* mat);

	Matrix3(float a, float b, float c,
		float d, float e, float f,
		float g, float h, float i);

	Matrix3 operator+(Matrix3 &other);

	Matrix3 operator-(Matrix3 &other);

	Matrix3 operator*(Matrix3 &other);
};
