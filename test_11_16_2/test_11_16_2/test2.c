//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;//占用四个字节
//	printf("%d\n", sizeof(a));//打印a所占空间，单位是字节
//	char b = 0;//占用一个字节
//	printf("%d\n", sizeof(b));//打印b所占空间
//
//	printf("%p\n", &a);//打印a的地址
//	printf("%p\n", &b);//打印c的地址
//
//	int* pa = &a;//&a就是取a的地址，pa是指针变量，*告诉我们pa是指针变量，int是告诉我们pa指向的a是int类型
//	*pa = 20;//* - 是解引用操作符，此时*pa就是a
//	printf("%d\n", a);//看a是否改变
//
//	int arr[10] = { 0 };
//	&arr;//取数组的地址
//
//	//野指针 - 问题，程序会崩
//	*(int*)0x00001123 = 100;
//
//	return 0;
//}