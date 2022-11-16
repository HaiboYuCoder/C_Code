//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	//从左向右依次执行
//	//首先，a>b为假，这个式子便是0
//	//a = b + 10，a为12
//	//a
//	//b = a + 1，b=13
//	//最后，赋值给c
//	printf("%d\n", c);//13
//
//	int d = 1;
//	if (a = b + 1, c = a / 2, d > 0)//从左向右依次计算，最后判断d>0
//	{
//
//	}
//
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{ 
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}
//	//如果使用逗号表达式，改写：
//	while (a = get_val(), count_val(a), a > 0)//从左向右依次执行，最后判断a>0
//	{
//		//业务处理
//	}
//
//
//	return 0;
//}