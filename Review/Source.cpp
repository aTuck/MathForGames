#include <iostream>
#include <math.h>


//11/27/17
void Reverse(char *rev)
{
	int length = 0;
	while (rev[length] != '\0')
	{
		length++;
	}

	for (int i = 0; i < length / 2; i++)
	{
		char temp = rev[i];
		rev[i] = rev[length - 1 - i];
		rev[length - 1 - i] = temp;
	}
}

float* SumOfVec2(float a[], float b[])
{
	float *ans = new float[2];
	ans[0] = a[0] + b[0];
	ans[1] = a[1] + b[1];
	return ans;
}

void AllEven(int *myArray, int numElements)
{
	int val = 0;
	for (int i = 0; i < numElements; i++)
	{
		myArray[i] = val += 2;
	}
}

float MagnitureOfvec3(float vec[])
{
	float mag = (vec[0] * vec[0]) + (vec[1] * vec[1]) + (vec[2] * vec[2]);
	mag = sqrt(mag);
	return mag;
}

float *MatrixMinusMatrix(float a[], float b[])
{
	float *ans = new float[4];
	for (int i = 0; i < 4; i++)
	{
		ans[i] = a[i] - b[i];
	}
	return ans;
}

class Cat
{
private:
	char m_Name;
public:
	Cat() {}
	void NameMe(char letter)
	{
		m_Name = letter;
	}
};

//12/4/17
int MostCommonValue(int *arr, int numElements)
{
	int timeSeen = 0;
	int mostTimeSeen = 0;
	int commonValue = arr[0];

	for(int i = 0; i < numElements; i++)
	{
		for(int j = 0; j < numElements; j++)
		{
			if(arr[i] == arr[j])
			{
				timeSeen++;
			}
		}
		if(timeSeen > mostTimeSeen)
		{
			mostTimeSeen = timeSeen;
			commonValue = arr[i];
		}
		timeSeen = 0;
	}
	return commonValue;
}

int *CharToInt(char *word)
{
	int i = 0;	
	while(word[i] != '\0')
	{
		i++;
	}
	int *arr = new int[i];
	for(int j = 0; j < i; j++)
	{
		arr[j] = word[j];
	}
	return arr;
}

//Can't use an if statement
int LargestValue(int *arr, int len)
{
	int largest = arr[0];
	for(int i = 0; i < len; i++)
	{
		largest = (arr[i] > largest) ? arr[i] : largest;
	}
	return largest;
}



int main()
{
	//int ar[50];
	//AllEven(ar, 50);
	//char str[] = "Dylan";
	//Reverse(str);
	//float a[] = { 1.0f, 1.0f };
	//float b[] = { 1.0f, 1.0f };
	//float *sumVec2 = SumOfVec2(a, b);
	//float vec[3] = { 7,3,4 };
	//float ans = MagnitureOfvec3(vec);
	//float matA[4] = { 2,2,2,2 };
	//float matB[4] = { 1,1,1,1 };
	//float *matC = MatrixMinusMatrix(matA, matB);
	//Cat cats[26];
	//int i = 0;
	//int letter = 65;
	//while (i < 26)
	//{
	//	cats[i].NameMe((i % 2 == 0) ? letter : letter + 32);
	//	letter++;
	//	i++;
	//}
	
	int arr[6] = { 1,2,2,3,2,1 };
	int c = MostCommonValue(arr, 6);

	int *a = CharToInt("Dylan");
	for (int i = 0; i < 5; i++)
		std::cout << a[i];

	int b[5] = { 0,-1,-2,2,-5 };
	int large = LargestValue(b, 5);

	system("pause");
}