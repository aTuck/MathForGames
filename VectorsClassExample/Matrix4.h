
#pragma once
#include "Vector4.h"

class Matrix4
{
private:
	float *mMat;
public:
	Matrix4();

	Matrix4(float* mat);

	Matrix4(float a, float b, float c, float d,
		float e, float f, float g, float h,
		float i, float j, float k, float l);

	Matrix4 operator+(Matrix4 &other);

	Matrix4 operator-(Matrix4 &other);

	Matrix4 operator*(Matrix4 &other);	
};
