//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////дһ��������ʵ��һ��������������Ķ��ֲ���
//int serach(int key,int arr[],int size)
//{
//	int left = 0;
//	int right = size - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right--;
//		}
//		else if (arr[mid] < key)
//		{
//			left++;
//		}
//		else
//		{
//			return mid;
//			flag = 1;
//		}
//	}
//	if (flag == 0);
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	int size = 0;
//	scanf("%d", &key);
//	//printf("%d\n", sizeof(arr));//40,���������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4��������������һ��Ԫ�صĴ�С����λ���ֽ�
//	size = sizeof(arr) / sizeof(arr[0]);
//	int ret = serach(key, arr,size);
//	if (ret == 0)
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}