#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char* p;
	int* q;
	printf("%zd\n", sizeof(p));
	printf("%zd\n", sizeof(q));//%zd�޷�������
	//x86��32λ����
	//x64��64λ����

	return 0;
}