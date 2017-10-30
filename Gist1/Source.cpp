#include <iostream>
#include <math.h>

bool IsPerpedicular(float vecA[], float vecB[])
{
	float dot = vecA[0] * vecB[0] + vecA[1] * vecB[1] + vecA[2] * vecB[2];
	if (dot == 0.0f)
	{
		std::cout << "90 degrees" << std::endl;
		return true;
	}
	std::cout << (dot * 180) / 3.14159265 << " degrees" << std::endl;
	return false;
}

int main()
{
	float a[] = { 0.0, 1.0, 0.0 };
	float b[] = { 1.0, 0.0, 0.0 };
	bool perp = IsPerpedicular(a,b);
	if (perp)
		std::cout << "true\n";
	else
		std::cout << "false\n";
	system("pause");
}