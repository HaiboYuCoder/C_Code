//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int* pa;
//	int arr[10] = { 0 };
//	//sizeof()的格式化输出用%zu，只是识别所言计算变量的类型，并不访问，因此数组越界也并不会程序崩溃
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof(pa));
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(arr[10]));
//
//	printf("%zu\n", sizeof a);//当sizeof后面是变量时，（）可以省略，但类型的话则不行，从而也证明其是操作符而不是函数
//	//printf("%zu\n", sizeof int);//这种写法是错误的
//
//	return 0;
//}