#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 2;
	double c = 2.0;
	//ֻ�õ��������
	printf("%d\n", a / b);
	//������õ�С���Ľ�������뱣֤�����ͱ�����������һ���Ǹ�����
	printf("%.1f\n", a / c);
	return 0;
}