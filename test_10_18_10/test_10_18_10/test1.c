#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	return  z = x + y;

}


int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}