#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	//scanf是一个库函数，可以从键盘接收数据
	c = a + b;
	printf("c=%d\n", c);
	return 0;
}