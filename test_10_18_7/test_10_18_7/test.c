#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int a, int b)
{
	return a + b;
}
/*C语言风格注释
int Sub(int a, int b)
{
    return a-b;
}
*/
int main()
{
	//C++注释风格
	//int a = 10;
	//调用Add函数，完成加法
	printf("%d\n", Add(1, 2));
	return 0;
}