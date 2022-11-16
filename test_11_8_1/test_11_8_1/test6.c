#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 5;
	//iµÄ²¹Âë 0000 0000 0000 0000 0000 0000 0000 0101
	int m = 1;
	//mµÄ²¹Âë 0000 0000 0000 0000 0000 0000 0000 0001
	int j = 0;
	int count = 0;
	for (j = 0; j < 32; j++)
	{
		if ((m & i >> j) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}