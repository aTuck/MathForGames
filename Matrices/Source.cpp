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
};

int main()
{
	float matA[2][2] = { {2,2}, {2,2} };
	float matB[2][2] = { { 1,2 },{ 1,2 } };
	Matrix2 a = Matrix2(matA) + Matrix2(matB);
	Matrix2 b = Matrix2(matA) - Matrix2(matB);
	system("pause");
}