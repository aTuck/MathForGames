#include <iostream>

//What is a Matrix?
//	-  a grid of numbers arranged in rows and columns
//		- refered to as a m-by-n Matrix
//		- m represents number of rows
//		- n represents number of columns

class Matrix2
{
private:
	float mMatrix[2][2];
public:
	Matrix2()
	{
		mMatrix[0][0] = 1; mMatrix[0][1] = 0;
		mMatrix[1][0] = 0; mMatrix[1][1] = 1;
	}
	Matrix2(float matrix[2][2])
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				mMatrix[i][j] = matrix[i][j];
			}
		}
	}

	Matrix2 operator+(Matrix2 &other)
	{
		float newMat[2][2];
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				newMat[i][j] = mMatrix[i][j] + other.mMatrix[i][j];
			}
		}
		return Matrix2(newMat);
	}

	Matrix2 operator-(Matrix2 &other)
	{
		float newMat[2][2];
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				newMat[i][j] = mMatrix[i][j] - other.mMatrix[i][j];
			}
		}
		return Matrix2(newMat);
	}

	Matrix2 operator*(Matrix2 &other)
	{
		float newMat[2][2];
		newMat[0][0] = (mMatrix[0][0] * other.mMatrix[0][0]) +
					   (mMatrix[0][1] * other.mMatrix[1][0]);
		newMat[0][1] = (mMatrix[0][0] * other.mMatrix[0][1]) +
					   (mMatrix[0][1] * other.mMatrix[1][1]);
		newMat[1][0] = (mMatrix[1][0] * other.mMatrix[0][0]) +
					   (mMatrix[1][1] * other.mMatrix[1][0]);
		newMat[1][1] = (mMatrix[1][0] * other.mMatrix[0][1]) +
					   (mMatrix[1][1] * other.mMatrix[1][1]);
		return Matrix2(newMat);
	}

	Matrix2 operator*(float other)
	{
		float newMat[2][2];
		newMat[0][0] = (mMatrix[0][0] * other);
		newMat[0][1] = (mMatrix[0][1] * other);
		newMat[1][0] = (mMatrix[1][0] * other);
		newMat[1][1] = (mMatrix[1][1] * other);
		return Matrix2(newMat);
	}
};

int main()
{
	float matA[2][2] = { {1,2}, {3,4} };
	float matB[2][2] = { { 2,0 },{ 1,2 } };
	Matrix2 a = Matrix2(matA) + Matrix2(matB);
	Matrix2 b = Matrix2(matA) - Matrix2(matB);
	Matrix2 c = Matrix2(matA) * Matrix2(matB);
	Matrix2 d = Matrix2(matA) * 2;
	system("pause");
}