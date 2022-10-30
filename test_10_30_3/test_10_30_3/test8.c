//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//
//// 一个关机程序
////1. 程序执行起来就倒计时关机，60秒后关机
////如果输入：我是猪，就取消关机
////shutdown -s -t 60
////shutdown -a 取消关机
//
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("如果想去取消关机，需要输入我是猪\n");
//	scanf("%s", arr);
//	while (1)
//	{
//		if (0 == strcmp(arr, "我是猪"))
//		{
//			printf("小乖乖，真听话\n");
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("真不听话\n");
//		}
//	}
//	return 0;
//}
//
//#include <string.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑在1分内关机，如果输入：我是猪，去取消关机\n");
//	scanf("%s", input);
//	//判断
//	if (strcmp(input, "我是猪") == 0)
//	{
//		printf("小乖乖，这就取消关机\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}