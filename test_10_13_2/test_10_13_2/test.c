#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()                                   //定义主函数
{                                            //函数开始
	int a, b, sum;                           //本行是程序的声明部分，定义a,b,sum为整形变量
	a = 123;                                 //对a进行赋值
	b = 456;                                 //对b进行赋值
	sum = a + b;                             //进行a+b的运算，并把结果存放在变量sum中
	printf("sum is %d\n", sum);       //输出结果
	return 0;                                //使函数值返回为0
}                                            //函数结束