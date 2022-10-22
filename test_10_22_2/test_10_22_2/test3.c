#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int Add(int,int);


int main()
{
	int a = 0;
	int b = 0;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}


