#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//数组名本来就是地址
	char password[20] = { 0 };
	int ch = 0;

	printf("请输入密码:>");
	scanf("%s", password);//123456

	//消除\n - 清理缓冲区,也同样适用于清理空格后的所有字符
	while (getchar()!='\n')//只读，把字服符从缓冲区拿走
	{
		;
	}

	printf("请确认密码(Y/N):>");
	ch = getchar();
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");

	return 0;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", num);

	//float f = 0.0f;
	//scanf("%f", &f);
	//printf("%f\n", f);

	return 0;
}