//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//这里涉及到一个断路问题，对于&&当判断到一个表达式（会执行）为假时，后续的便不再执行，同理对于||当判断到一个表达式为真（会执行）时，后续的便不再执行
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	printf("%d\n", i);//&&与||，判断为真时，i为1，否则为0
//
//	return 0;
//}