#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;

	while (a <= 20000)
	{
		printf("�ô���:%d\n", a);
			a++;

	}
	if (a > 20000)
		printf("�ù���\n");

	return 0;
}