#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 9; i++)
	{
		ret = ret * i;
		sum = ret + sum;
	}
	printf("%d\n", sum);
	return 0;
}