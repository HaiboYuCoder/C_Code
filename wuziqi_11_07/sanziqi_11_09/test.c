#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//3����

void menu()
{
	printf("**********************\n");
	printf("******1.play   *******\n");
	printf("******2.exit   *******\n");
	printf("**********************\n");
}

void game()
{
	//�����������
	char board[HAN][LIE];
	init_board(board, HAN, LIE);
	//��������
	print_board(board, HAN, LIE);
	char ret = 0;
	while (1)
	{
		//�������,����*
		player_move(board, HAN, LIE);
		print_board(board, HAN, LIE);
		//�ж�
		ret = is_win(board, HAN, LIE);
		if (ret != 'C')
		{
			break;
		}
		//�������壬����#
		computerr_move(board, HAN, LIE);
		print_board(board, HAN, LIE);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ");
	else if (ret == '#')
		printf("����Ӯ");
	else
		printf("ƽ��");
}

//�ж���Ӯ
//�ж���Ӯ�Ĵ���Ҫ�����ң�����Ӯ�ˣ����Ӯ�ˣ����Ӯ����Ϸ������
//����Ӯ:#
//���Ӯ:*
//ƽ�֣�Q
//��Ϸ������C

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//��Ϸ�˵�
	do
	{
		menu();
		printf("�����루1/0��: ");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			//������Ϸ
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int count;
int main()
{
	test();
	return 0;
}




