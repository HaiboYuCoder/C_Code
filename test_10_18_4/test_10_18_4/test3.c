#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//4.枚举常量
//枚举 - 一一列举
//
//血型
//性别
//三原色 -Red Green Blue

enum color//enum是枚举关键字
{
	//RED,GREEN,BLUE是枚举类型Color的可能取值，同时也是常量，所以叫枚举常量
	RED,//0
	GREEN,//1
	BLUE//2

};

int main()
{
	enum color c = BLUE;

	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);
	return 0;
}