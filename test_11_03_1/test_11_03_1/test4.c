#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	printf("\n");
	//结果是啥？
	//注：printf函数的返回值是打印在屏幕上字符的个数,一个数字算一个字符，43是两个字符
	return 0;
}