#define  _CRT_SECURE_NO_WARNINGS 1


void init_array(int arr[][10], int a, int b)
{
	int i = 0;
	for (i = 0;i <= a - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= b - 1; j++)
		{
			arr[i][j] = '*';
		}
	}
}

int main()
{
	int arr[10][10];
	init_array(arr,10,10);
	return 0;
}