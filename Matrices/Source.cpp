#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
//What is a Matrix?
//	-  a grid of numbers arranged in rows and columns
//		- refered to as a m-by-n Matrix
//		- m represents number of rows
//		- n represents number of columns


float DegToRad(float deg)
{
	return (deg * M_PI) / 180;
}

float RadToDeg(float rad)
{
	return (rad / M_PI) * 180;
}

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

	Matrix2 Transpose()
	{
		float newMat[2][2] = { {mMatrix[0][0], mMatrix[1][0] },
							   {mMatrix[0][1], mMatrix[1][1] } };
		return Matrix2(newMat);
	}
};

class Matrix3
{
private:
	float mMatrix[3][3];
public:
	Matrix3()
	{
		mMatrix[0][0] = 1; mMatrix[0][1] = 0; mMatrix[0][3] = 0;
		mMatrix[1][0] = 0; mMatrix[1][1] = 1; mMatrix[1][3] = 0;
		mMatrix[2][0] = 0; mMatrix[2][1] = 0; mMatrix[2][3] = 1;
	}
	Matrix3(float matrix[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mMatrix[i][j] = matrix[i][j];
			}
		}
	}

	Matrix3 operator+(Matrix3 &other)
	{
		float newMat[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				newMat[i][j] = mMatrix[i][j] + other.mMatrix[i][j];
			}
		}
		return Matrix3(newMat);
	}

	Matrix3 operator-(Matrix3 &other)
	{
		float newMat[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				newMat[i][j] = mMatrix[i][j] - other.mMatrix[i][j];
			}
		}
		return Matrix3(newMat);
	}

	Matrix3 operator*(Matrix3 &other)
	{
		float newMat[3][3];
		newMat[0][0] = (mMatrix[0][0] * other.mMatrix[0][0]) +
					   (mMatrix[0][1] * other.mMatrix[1][0]) +
					   (mMatrix[0][2] * other.mMatrix[2][0]);
		newMat[0][1] = (mMatrix[0][0] * other.mMatrix[0][1]) +
					   (mMatrix[0][1] * other.mMatrix[1][1]) +
					   (mMatrix[0][2] * other.mMatrix[2][1]);
		newMat[0][2] = (mMatrix[0][0] * other.mMatrix[0][2]) +
					   (mMatrix[0][1] * other.mMatrix[1][2]) +
					   (mMatrix[0][2] * other.mMatrix[2][2]);

		newMat[1][0] = (mMatrix[1][0] * other.mMatrix[0][0]) +
					   (mMatrix[1][1] * other.mMatrix[1][0]) +
					   (mMatrix[1][2] * other.mMatrix[2][0]);
		newMat[1][1] = (mMatrix[1][0] * other.mMatrix[0][1]) +
					   (mMatrix[1][1] * other.mMatrix[1][1]) +
					   (mMatrix[1][2] * other.mMatrix[2][1]);
		newMat[1][2] = (mMatrix[1][0] * other.mMatrix[0][2]) +
					   (mMatrix[1][1] * other.mMatrix[1][2]) +
					   (mMatrix[1][2] * other.mMatrix[2][2]);

		newMat[2][0] = (mMatrix[2][0] * other.mMatrix[0][0]) +
					   (mMatrix[2][1] * other.mMatrix[1][0]) +
					   (mMatrix[2][2] * other.mMatrix[2][0]);
		newMat[2][1] = (mMatrix[2][0] * other.mMatrix[0][1]) +
					   (mMatrix[2][1] * other.mMatrix[1][1]) +
  					   (mMatrix[2][2] * other.mMatrix[2][1]);
		newMat[2][2] = (mMatrix[2][0] * other.mMatrix[0][2]) +
					   (mMatrix[2][1] * other.mMatrix[1][2]) +
					   (mMatrix[2][2] * other.mMatrix[2][2]);
		return Matrix3(newMat);
	}

	Matrix3 operator*(float other)
	{
		float newMat[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				newMat[i][j] = mMatrix[i][j] * other;
			}
		}
		return Matrix3(newMat);
	}

	Matrix3 Transpose()
	{
		float newMat[3][3] = { { mMatrix[0][0], mMatrix[1][0], mMatrix[2][0] },
							   { mMatrix[0][1], mMatrix[1][1], mMatrix[2][1] },
							   { mMatrix[0][2], mMatrix[1][2], mMatrix[2][2] } };
		return Matrix3(newMat);
	}

	Matrix3 RotateX(float deg)
	{
		float rad = DegToRad(deg);
		float rotationMatrix[3][3] = { {1,         0,        0 },
									   {0,  cos(rad), sin(rad) },
									   {0, -sin(rad), cos(rad) } };
		return *this * Matrix3(rotationMatrix);
	}
};

class Matrix4
{
private:
	float mMatrix[4][4];
public:
	Matrix4()
	{
		mMatrix[0][0] = 1; mMatrix[0][1] = 0; mMatrix[0][3] = 0; mMatrix[0][4] = 0;
		mMatrix[1][0] = 0; mMatrix[1][1] = 1; mMatrix[1][3] = 0; mMatrix[1][4] = 0;
		mMatrix[2][0] = 0; mMatrix[2][1] = 0; mMatrix[2][3] = 1; mMatrix[2][4] = 0;
		mMatrix[3][0] = 0; mMatrix[3][1] = 0; mMatrix[3][3] = 1; mMatrix[3][4] = 1;
	}
	Matrix4(float matrix[4][4])
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				mMatrix[i][j] = matrix[i][j];
			}
		}
	}

	Matrix4 operator+(Matrix4 &other)
	{
		float newMat[4][4];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				newMat[i][j] = mMatrix[i][j] + other.mMatrix[i][j];
			}
		}
		return Matrix4(newMat);
	}

	Matrix4 operator-(Matrix4 &other)
	{
		float newMat[4][4];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				newMat[i][j] = mMatrix[i][j] - other.mMatrix[i][j];
			}
		}
		return Matrix4(newMat);
	}

	Matrix4 operator*(Matrix4 &other)
	{
		float newMat[4][4];
		newMat[0][0] = (mMatrix[0][0] * other.mMatrix[0][0]) +
					   (mMatrix[0][1] * other.mMatrix[1][0]) +
					   (mMatrix[0][2] * other.mMatrix[2][0]) +
					   (mMatrix[0][3] * other.mMatrix[3][0]);
		newMat[0][1] = (mMatrix[0][0] * other.mMatrix[0][1]) +
					   (mMatrix[0][1] * other.mMatrix[1][1]) +
					   (mMatrix[0][2] * other.mMatrix[2][1]) +
					   (mMatrix[0][3] * other.mMatrix[3][1]);
		newMat[0][2] = (mMatrix[0][0] * other.mMatrix[0][2]) +
					   (mMatrix[0][1] * other.mMatrix[1][2]) +
					   (mMatrix[0][2] * other.mMatrix[2][2]) +
 					   (mMatrix[0][3] * other.mMatrix[3][2]);
		newMat[0][3] = (mMatrix[0][0] * other.mMatrix[0][3]) +
					   (mMatrix[0][1] * other.mMatrix[1][3]) +
					   (mMatrix[0][2] * other.mMatrix[2][3]) +
					   (mMatrix[0][3] * other.mMatrix[3][3]);

		newMat[1][0] = (mMatrix[1][0] * other.mMatrix[0][0]) +
					   (mMatrix[1][1] * other.mMatrix[1][0]) +
					   (mMatrix[1][2] * other.mMatrix[2][0]) +
					   (mMatrix[1][3] * other.mMatrix[3][0]);
		newMat[1][1] = (mMatrix[1][0] * other.mMatrix[0][1]) +
					   (mMatrix[1][1] * other.mMatrix[1][1]) +
					   (mMatrix[1][2] * other.mMatrix[2][1]) +
					   (mMatrix[1][3] * other.mMatrix[3][1]);
		newMat[1][2] = (mMatrix[1][0] * other.mMatrix[0][2]) +
					   (mMatrix[1][1] * other.mMatrix[1][2]) +
					   (mMatrix[1][2] * other.mMatrix[2][2]) +
					   (mMatrix[1][3] * other.mMatrix[3][2]);
		newMat[1][3] = (mMatrix[1][0] * other.mMatrix[0][3]) +
					   (mMatrix[1][1] * other.mMatrix[1][3]) +
					   (mMatrix[1][2] * other.mMatrix[2][3]) +
					   (mMatrix[1][3] * other.mMatrix[3][3]);

		newMat[2][0] = (mMatrix[2][0] * other.mMatrix[0][0]) +
					   (mMatrix[2][1] * other.mMatrix[1][0]) +
					   (mMatrix[2][2] * other.mMatrix[2][0]) +
					   (mMatrix[2][3] * other.mMatrix[3][0]);
		newMat[2][1] = (mMatrix[2][0] * other.mMatrix[0][1]) +
					   (mMatrix[2][1] * other.mMatrix[1][1]) +
					   (mMatrix[2][2] * other.mMatrix[2][1]) +
					   (mMatrix[2][3] * other.mMatrix[3][1]);	
		newMat[2][2] = (mMatrix[2][0] * other.mMatrix[0][2]) +
					   (mMatrix[2][1] * other.mMatrix[1][2]) +
					   (mMatrix[2][2] * other.mMatrix[2][2]) +
					   (mMatrix[2][3] * other.mMatrix[3][2]);
		newMat[2][3] = (mMatrix[2][0] * other.mMatrix[0][3]) +
					   (mMatrix[2][1] * other.mMatrix[1][3]) +
					   (mMatrix[2][2] * other.mMatrix[2][3]) +
					   (mMatrix[2][3] * other.mMatrix[3][3]);

		newMat[3][0] = (mMatrix[3][0] * other.mMatrix[0][0]) +
					   (mMatrix[3][1] * other.mMatrix[1][0]) +
					   (mMatrix[3][2] * other.mMatrix[2][0]) +
					   (mMatrix[3][3] * other.mMatrix[3][0]);
		newMat[3][1] = (mMatrix[3][0] * other.mMatrix[0][1]) +
					   (mMatrix[3][1] * other.mMatrix[1][1]) +
					   (mMatrix[3][2] * other.mMatrix[2][1]) +
					   (mMatrix[3][3] * other.mMatrix[3][1]);
		newMat[3][2] = (mMatrix[3][0] * other.mMatrix[0][2]) +
					   (mMatrix[3][1] * other.mMatrix[1][2]) +
					   (mMatrix[3][2] * other.mMatrix[2][2]) +
					   (mMatrix[3][3] * other.mMatrix[3][2]);
		newMat[3][3] = (mMatrix[3][0] * other.mMatrix[0][3]) +
					   (mMatrix[3][1] * other.mMatrix[1][3]) +
					   (mMatrix[3][2] * other.mMatrix[2][3]) +
					   (mMatrix[3][3] * other.mMatrix[3][3]);
		return Matrix4(newMat);
	}

	Matrix4 operator*(float other)
	{
		float newMat[4][4];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				newMat[i][j] = mMatrix[i][j] * other;
			}
		}
		return Matrix4(newMat);
	}

	Matrix4 Transpose()
	{
		float newMat[4][4] = { { mMatrix[0][0], mMatrix[1][0], mMatrix[2][0], mMatrix[3][0] },
							   { mMatrix[0][1], mMatrix[1][1], mMatrix[2][1], mMatrix[3][1] },
							   { mMatrix[0][2], mMatrix[1][2], mMatrix[2][2], mMatrix[2][3] },
							   { mMatrix[0][3], mMatrix[1][3], mMatrix[2][3], mMatrix[3][3]} };
		return Matrix4(newMat);
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
	Matrix2 t = Matrix2(matA).Transpose();

	float matrix[3][3] = { {1, 0, 5},
						   {0, 1, 3},
						   {0, 0, 1} };

	Matrix3 test = Matrix3(matrix);
	Matrix3 rot = test.RotateX(20);

	float degToRad = DegToRad(20);
	float radToDeg = RadToDeg(degToRad);
	system("pause");
}