//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////数学方法
//void ex_suanshu(int a, int b)
//{
//	a = a + b;
//	b = a - b;//a+b-b=a
//	a = a - b;//a+b-a=b
//	printf("a=%d b=%d\n", a, b);
//}
//
////异或法
//void ex_yihuo(int a, int b)
//{
//	a = a ^ b;
//	b = a ^ b;//a^b^b=a
//	a = a ^ b;//a^b^a=b
//	printf("a=%d b=%d\n", a, b);
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	ex_suanshu(a, b);//可能会溢出，a+b的和可能超出int范围
//	ex_yihuo(a, b);
//	return 0;
//}