#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	//假设密码为123456
//	char password[20] = { 0 };
//	int i = 0;
//	int flag = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码：>\n");
//		scanf("%s", password);//数组名本质上就是地址，所以不需要取地址
//		//判断两个字符串是否相等，要使用strcmp函数，不能直接使用==
//		//int ret = strcmp(password, "123456");
//		//如果第一个字符串小于第二个字符串，返回<0的数字
//		//如果第一个字符串大于第二个字符串，返回>0的数字
//		//如果第一个字符串等于第二个字符串，返回0
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登录成功。\n");
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("输入错误。\n");
//	}
//	return 0;
//}