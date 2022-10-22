#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define 宏
#define MAX(x,y) (x>y?x:y)
//#define 宏名字 参数  宏体


int main()
{


	int a = 0;
	int b = 10;
	int c = MAX(a, b);
	printf("%d\n", c);

	return 0;
}