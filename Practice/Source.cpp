#include<iostream>

void AddMat(int A[], int B[], int C[])
{	
	C[0] = A[0] + B[0];
	C[1] = A[1] + B[1];
	C[2] = A[2] + B[2];
	C[3] = A[3] + B[3];
}

void SubMat(int A[], int B[], int C[])
{	
	C[0] = A[0] - B[0];
	C[1] = A[1] - B[1];
	C[2] = A[2] - B[2];
	C[3] = A[3] - B[3];
}

int main()
{
	int a[] = { 1,1,1,1 };
	int b[] = { 1,1,1,1 };
	int c[4];
	AddMat(a, b, c);
	system("pause");
}