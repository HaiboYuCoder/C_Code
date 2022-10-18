#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;
	printf("上大学你会好好学习吗？（1/0）");
	scanf("%d", &input);

	if (input == 1)
		printf("好工作\n");
	else  if(input == 0)
		printf("回家卖红薯\n");
	else
	    printf("输入错误\n");


	return 0;
}