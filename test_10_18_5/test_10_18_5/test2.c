#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//C语言提供了一个库函数，可以计算字符串的长度,统计的是\0之前字符的个数
//strlen,需要头文件string.h
//string length


int main()
{

	char ch1[] = { 'a','b','c', };
	char ch2[] = "abc";
	char ch3[] = { 'a','b','c','\0'};

	printf("%d\n", strlen(ch1));//随机值
	printf("%d\n", strlen(ch2));//3
	printf("%d\n", strlen(ch3));//3



	return 0;
}