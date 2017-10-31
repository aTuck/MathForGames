#pragma once

class Matrix2
{
private:
	float *mMat;
public:
	Matrix2()
	{
		mMat = new float[4];
	}

	Matrix2(float* mat)
	{
		mMat = new float[4];
		for (int i = 0; i < 4; i++)
		{
			mMat[i] = mat[i];
		}
	}
	Matrix2(float a, float b, float c, float d)
	{
		mMat = new float[4];
		mMat[0] = a;
		mMat[1] = b;
		mMat[2] = c;
		mMat[3] = d;
	}

	Matrix2 operator+(Matrix2 &other)
	{
		float *newMat = new float[4];
		for (int i = 0; i < 4; i++)
		{
			newMat[i] = mMat[i] + other.mMat[i];
		}
		return Matrix2(newMat);
	}

	Matrix2 operator-(Matrix2 &other)
	{
		float *newMat = new float[4];
		for (int i = 0; i < 4; i++)
		{
			newMat[i] = mMat[i] - other.mMat[i];
		}
		return Matrix2(newMat);
	}

	Matrix2 operator*(Matrix2 &other)
	{
		float *newMat = new float[4];
		newMat[0] = mMat[0] * other.mMat[0] + mMat[1] * other.mMat[2];
		newMat[1] = mMat[0] * other.mMat[1] + mMat[1] * other.mMat[3];

		newMat[2] = mMat[2] * other.mMat[0] + mMat[3] * other.mMat[2];
		newMat[3] = mMat[2] * other.mMat[1] + mMat[3] * other.mMat[3];
		return Matrix2(newMat);
	}
};