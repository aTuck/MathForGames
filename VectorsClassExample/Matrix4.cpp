#include "Matrix4.h"

Matrix4::Matrix4()
{
	mMat = new float[12];
}

Matrix4::Matrix4(float* mat)
{
	mMat = new float[12];
	for (int i = 0; i < 12; i++)
	{
		mMat[i] = mat[i];
	}
}
Matrix4::Matrix4(float a, float b, float c, float d,
	float e, float f, float g, float h,
	float i, float j, float k, float l)
{
	mMat = new float[12];
	mMat[0] = a;
	mMat[1] = b;
	mMat[2] = c;
	mMat[3] = d;
	mMat[4] = e;
	mMat[5] = f;
	mMat[6] = g;
	mMat[7] = h;
	mMat[8] = i;
	mMat[9] = j;
	mMat[10] = k;
	mMat[11] = l;
}

Matrix4 Matrix4::operator+(Matrix4 &other)
{
	float *newMat = new float[12];
	for (int i = 0; i < 12; i++)
	{
		newMat[i] = mMat[i] + other.mMat[i];
	}
	return Matrix4(newMat);
}

Matrix4 Matrix4::operator-(Matrix4 &other)
{
	float *newMat = new float[12];
	for (int i = 0; i < 12; i++)
	{
		newMat[i] = mMat[i] - other.mMat[i];
	}
	return Matrix4(newMat);
}

Matrix4 Matrix4::operator*(Matrix4 &other)
{
	float *newMat = new float[12];

	newMat[0] = mMat[0] * other.mMat[0] + mMat[1] * other.mMat[3] + mMat[2] * other.mMat[6];
	newMat[1] = mMat[0] * other.mMat[1] + mMat[1] * other.mMat[4] + mMat[2] * other.mMat[7];
	newMat[2] = mMat[0] * other.mMat[2] + mMat[1] * other.mMat[5] + mMat[2] * other.mMat[8];

	newMat[3] = mMat[3] * other.mMat[0] + mMat[4] * other.mMat[3] + mMat[5] * other.mMat[6];
	newMat[4] = mMat[3] * other.mMat[1] + mMat[4] * other.mMat[4] + mMat[5] * other.mMat[7];
	newMat[5] = mMat[3] * other.mMat[2] + mMat[4] * other.mMat[5] + mMat[5] * other.mMat[8];

	newMat[6] = mMat[6] * other.mMat[0] + mMat[7] * other.mMat[3] + mMat[8] * other.mMat[6];
	newMat[7] = mMat[6] * other.mMat[1] + mMat[7] * other.mMat[4] + mMat[8] * other.mMat[7];
	newMat[8] = mMat[6] * other.mMat[2] + mMat[7] * other.mMat[5] + mMat[8] * other.mMat[8];

	return Matrix4(newMat);
}