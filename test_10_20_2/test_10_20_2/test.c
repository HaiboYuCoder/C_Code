#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{

		if (a % 2 == 0)
			printf("Even\n");
		else
			printf("Odd\n");
	}

	return 0;
}