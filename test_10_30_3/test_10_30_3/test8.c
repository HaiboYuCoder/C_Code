//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//
//// һ���ػ�����
////1. ����ִ�������͵���ʱ�ػ���60���ػ�
////������룺��������ȡ���ػ�
////shutdown -s -t 60
////shutdown -a ȡ���ػ�
//
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("�����ȥȡ���ػ�����Ҫ����������\n");
//	scanf("%s", arr);
//	while (1)
//	{
//		if (0 == strcmp(arr, "������"))
//		{
//			printf("С�Թԣ�������\n");
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("�治����\n");
//		}
//	}
//	return 0;
//}
//
//#include <string.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ�����1���ڹػ���������룺������ȥȡ���ػ�\n");
//	scanf("%s", input);
//	//�ж�
//	if (strcmp(input, "������") == 0)
//	{
//		printf("С�Թԣ����ȡ���ػ�\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}