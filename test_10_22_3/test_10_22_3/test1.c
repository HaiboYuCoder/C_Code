#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define ��
#define MAX(x,y) (x>y?x:y)
//#define ������ ����  ����


int main()
{


	int a = 0;
	int b = 10;
	int c = MAX(a, b);
	printf("%d\n", c);

	return 0;
}