//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;//ռ���ĸ��ֽ�
//	printf("%d\n", sizeof(a));//��ӡa��ռ�ռ䣬��λ���ֽ�
//	char b = 0;//ռ��һ���ֽ�
//	printf("%d\n", sizeof(b));//��ӡb��ռ�ռ�
//
//	printf("%p\n", &a);//��ӡa�ĵ�ַ
//	printf("%p\n", &b);//��ӡc�ĵ�ַ
//
//	int* pa = &a;//&a����ȡa�ĵ�ַ��pa��ָ�������*��������pa��ָ�������int�Ǹ�������paָ���a��int����
//	*pa = 20;//* - �ǽ����ò���������ʱ*pa����a
//	printf("%d\n", a);//��a�Ƿ�ı�
//
//	int arr[10] = { 0 };
//	&arr;//ȡ����ĵ�ַ
//
//	//Ұָ�� - ���⣬������
//	*(int*)0x00001123 = 100;
//
//	return 0;
//}