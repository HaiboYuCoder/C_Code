#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//4.ö�ٳ���
//ö�� - һһ�о�
//
//Ѫ��
//�Ա�
//��ԭɫ -Red Green Blue

enum color//enum��ö�ٹؼ���
{
	//RED,GREEN,BLUE��ö������Color�Ŀ���ȡֵ��ͬʱҲ�ǳ��������Խ�ö�ٳ���
	RED,//0
	GREEN,//1
	BLUE//2

};

int main()
{
	enum color c = BLUE;

	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);
	return 0;
}