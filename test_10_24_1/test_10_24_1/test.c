#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int b = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (b = 1; b <= i; b++)
//		{
//			ret = 1;
//			ret = i * ret;
//		}
//		sum = ret + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = ret + sum;
	}
	printf("%d\n", sum);
	return 0;
}