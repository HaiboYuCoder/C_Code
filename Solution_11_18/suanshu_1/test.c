#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 2;
	double c = 2.0;
	//只得到整数结果
	printf("%d\n", a / b);
	//除法想得到小数的结果，必须保证除数和被除数至少有一个是浮点数
	printf("%.1f\n", a / c);
	return 0;
}