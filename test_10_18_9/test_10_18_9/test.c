#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;

	while (a <= 20000)
	{
		printf("敲代码:%d\n", a);
			a++;

	}
	if (a > 20000)
		printf("好工作\n");

	return 0;
}