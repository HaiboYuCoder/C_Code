#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 0;
	int b = 0;
	int m = 0;
	scanf("%d %d",&a,&b);
	/*if (a > b)
		m = a;
	else
		m = b;*/
    m = (a > b ? a : b);//相当于上面四行
	   //exp1 ? exp2 : exp3

	printf("%d\n", m);


	return 0;
}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入
//	scanf("%d %d", &num1, &num2);
//	//求和
//	sum = Add(num1, num2);//()函数调用操作符
//
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	/ int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", arr[4]);//[]下标引用操作符
//
//	return 0;
//}