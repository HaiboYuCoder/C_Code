//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//Sleep的头文件
//#include <stdlib.h>//system的头文件
//
//int main()
//{
//	//char arr[] = "heu";//[b i t \0]
//	                   // 0 1 2 3
//	//strlen(arr)-1;
//
//	char arr1[] = "welcome to heu!!!!!";
//	char arr2[] = "*******************";
//	int left = 0;//左下标
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//Sleep函数是实现睡眠，单位是毫秒，在linux为sleep
//		system("cls");//system是一个库函数，可以执行系统命令，cls是清空屏幕的一个命令
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}