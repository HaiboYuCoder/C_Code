#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	int c = scanf("%d %d", &a, &b);
	//scanf������ȡʧ�ܵ�ʱ��᷵��EOF(-1)
	//�����ȡ�����Ļ������ص��Ƕ�ȡ�������ݵĸ���
	//��ִ�й�����ctrl+c����ʹ����ֹͣ��VS��bugʹ����Ҫ��������
	printf("c=%d\n", c);
	printf("a=%d\n", a);
	printf("b=%d\n", b);


	return 0;
}