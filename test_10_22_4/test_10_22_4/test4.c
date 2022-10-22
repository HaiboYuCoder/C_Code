#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char* p;
	int* q;
	printf("%zd\n", sizeof(p));
	printf("%zd\n", sizeof(q));//%zd无符号整形
	//x86是32位环境
	//x64是64位环境

	return 0;
}