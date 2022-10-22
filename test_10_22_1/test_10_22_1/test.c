#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	int c = scanf("%d %d", &a, &b);
	//scanf函数读取失败的时候会返回EOF(-1)
	//如果读取正常的话，返回的是读取到的数据的个数
	//在执行过程中ctrl+c可以使程序停止，VS的bug使得需要输入三次
	printf("c=%d\n", c);
	printf("a=%d\n", a);
	printf("b=%d\n", b);


	return 0;
}