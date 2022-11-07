#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void pai(int* arr, int size)
{
	int i = 0;
	for (i = 0; i <= size - 2; i++)
	{
		int j = 0;
		for (j = 0; j <= size - 1 - i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int a = 0;
	int arr[] = { 1,2,3,4,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	pai(arr,size);
	for (a = 0; a <= size - 1; a++)
	{
		printf("%d ", arr[a]);
	}
	return 0;
}