#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Stu
{
	char name[20];
	char sex[5];
	int age;
};

void Print(struct Stu* pc)
{
	//printf("%s %s %d\n", (*pc).name, (*pc).sex, (*pc).age);
	printf("%s %s %d\n", pc->name, pc->sex, pc->age);//�ṹ���ָ��->��Ա��
	//pc->name��(*pc).name�ȼ�
}


int main()
{
	struct Stu a = { "LiHua","��",20 };
	
	Print(&a);


	return 0;
}