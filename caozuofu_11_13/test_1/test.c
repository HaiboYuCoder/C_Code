#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test(int arr[][2])
{
	int i = 0;
	for (i = 0; i <= 1; i++)
	{
		int j = 0;
		for (j = 0; j <= 1; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}



int main()
{
	int arr[2][2] = { {1,2},{3,4} };
	test(arr);
	return 0;
}