#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		printf("%d\n", arr[i]);//当i等于10的时候，越界访问了
	}
	return 0;
}