#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//�������������ǵ�ַ
	char password[20] = { 0 };
	int ch = 0;

	printf("����������:>");
	scanf("%s", password);//123456

	//����\n - ��������,Ҳͬ������������ո��������ַ�
	while (getchar()!='\n')//ֻ�������ַ����ӻ���������
	{
		;
	}

	printf("��ȷ������(Y/N):>");
	ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");

	return 0;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", num);

	//float f = 0.0f;
	//scanf("%f", &f);
	//printf("%f\n", f);

	return 0;
}