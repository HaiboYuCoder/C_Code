#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//C�����ṩ��һ���⺯�������Լ����ַ����ĳ���,ͳ�Ƶ���\0֮ǰ�ַ��ĸ���
//strlen,��Ҫͷ�ļ�string.h
//string length


int main()
{

	char ch1[] = { 'a','b','c', };
	char ch2[] = "abc";
	char ch3[] = { 'a','b','c','\0'};

	printf("%d\n", strlen(ch1));//���ֵ
	printf("%d\n", strlen(ch2));//3
	printf("%d\n", strlen(ch3));//3



	return 0;
}