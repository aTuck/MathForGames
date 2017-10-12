#include <iostream>

//Points and Vecotrs
//	- a Point represents a location
//		- no size, lenght, scale, volume, mass
//	- a Vector represents a direction
//		- Has a lenght and can be scaled
//		- Can be rotated to face a direction but cannot be moved because it is not
//		  a location
//	- We can move a Point with a Vecotr by combining them
//		- cannont move a point with a point
//		- can combine a vector to make a new vector

//Points and Translation
//	- Translate a point by a vector
//		- P2 = P1 + V
//		- P2(P1x + Vx, P1y + Vy);

//Differnce between two Points
//	- V = P2 - P1
//	- V(P2x - P1x, P2y - P1y)

//Scaling a vector
//	- V2 = S * V1
//	- V2(V1x * S, V1y * S)

//Adding a Vector
//	- V3 = V1 + V2
//	- V3(V1x + V2x, V1y + V2y)

//Subtracting a vector
//	- V3 = V1 - v2
//	- V3(V1x - V2x, V1y - V2-y)

//Magnitude
//	- a^2 + b^2 = c^2

//Normalize
//	- Vn = V / Mag

//Dot Product
//	- Dot = V1 * V2

//Cross Product
//	- Only for Vec3
//		- V3 = V1 X V2
//		- V3x = V1y*V2z - V1zV2y
//		- V3y = V1z*V2x - V1xV2z
//		- V3z = V1x*V2y - V1yV2x

class Vector2
{
public:
	float mX, mY;

	Vector2()
	{
		mX = mY = 0;
	}

	Vector2(float x, float y)
	{
		mX = x;
		mY = y;
	}

	Vector2 operator+(Vector2 &other)
	{
		return Vector2(mX + other.mX, mY + other.mY);
	}

	Vector2 operator-(Vector2 &other)
	{
		return Vector2(mX - other.mX, mY - other.mY);
	}

	Vector2 operator*(float other)
	{
		return Vector2(mX * other, mY * other);
	}

	float Magnitude()
	{
		return sqrt((mX * mX) + (mY * mY));
	}

	Vector2 Normalize()
	{
		return Vector2(mX / Magnitude(), mY / Magnitude());
	}

	float Dot(Vector2 &other)
	{
		return (mX * other.mX) + (mY * other.mY);
	}
};

class Vector3
{
public:
	float mX, mY, mZ;

	Vector3()
	{
		mX = mY = mZ = 0;
	}

	Vector3(float x, float y, float z)
	{
		mX = x;
		mY = y;
		mZ = z;
	}

	Vector3 operator+(Vector3 &other)
	{
		return Vector3(mX + other.mX, mY + other.mY, mZ + other.mZ);
	}

	Vector3 operator-(Vector3 &other)
	{
		return Vector3(mX - other.mX, mY - other.mY, mZ - other.mZ);
	}

	Vector3 operator*(float other)
	{
		return Vector3(mX * other, mY * other, mZ * other);
	}

	float Magnitude()
	{
		return sqrt((mX * mX) + (mY * mY) + (mZ * mZ));
	}

	Vector3 Normalize()
	{
		return Vector3(mX / Magnitude(), mY / Magnitude(), mZ / Magnitude());
	}

	float Dot(Vector3 &other)
	{
		return (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ);
	}

	Vector3 Cross(Vector3 &other)
	{
		Vector3 newVec = Vector3();
		newVec.mX = (mY * other.mZ) - (mZ * other.mY);
		newVec.mY = (mZ * other.mX) - (mX * other.mZ);
		newVec.mZ = (mX * other.mY) - (mY * other.mX);
	}
};

class Vector4
{
public:
	float mX, mY, mZ, mW;
	Vector4(float x, float y, float z, float w)
	{
		mX = x;
		mY = y;
		mZ = z;
		mW = w;
	}

	Vector4 operator+(Vector4 &other)
	{
		return Vector4(mX + other.mX, mY + other.mY, mZ + other.mZ, mW + other.mW);
	}

	Vector4 operator-(Vector4 &other)
	{
		return Vector4(mX - other.mX, mY - other.mY, mZ - other.mZ, mW - other.mW);
	}

	Vector4 operator*(float other)
	{
		return Vector4(mX * other, mY * other, mZ * other, mW * mW);
	}

	float Magnitude()
	{
		return sqrt((mX * mX) + (mY * mY) + (mZ * mZ) + (mW * mW));
	}

	Vector4 Normalize()
	{
		return Vector4(mX / Magnitude(), mY / Magnitude(), mZ / Magnitude(), 
			mW / Magnitude());
	}

	float Dot(Vector4 &other)
	{
		return (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ) + (mW * other.mZ);
	}
};