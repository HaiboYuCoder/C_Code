#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;
	printf("�ϴ�ѧ���ú�ѧϰ�𣿣�1/0��");
	scanf("%d", &input);

	if (input == 1)
		printf("�ù���\n");
	else  if(input == 0)
		printf("�ؼ�������\n");
	else
	    printf("�������\n");


	return 0;
}