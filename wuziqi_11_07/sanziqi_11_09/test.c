#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//3子棋

void menu()
{
	printf("**********************\n");
	printf("******1.play   *******\n");
	printf("******2.exit   *******\n");
	printf("**********************\n");
}

void game()
{
	//设置玩家输入
	char board[HAN][LIE];
	init_board(board, HAN, LIE);
	//设置棋谱
	print_board(board, HAN, LIE);
	char ret = 0;
	while (1)
	{
		//玩家下棋,输入*
		player_move(board, HAN, LIE);
		print_board(board, HAN, LIE);
		//判断
		ret = is_win(board, HAN, LIE);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋，输入#
		computerr_move(board, HAN, LIE);
		print_board(board, HAN, LIE);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢");
	else if (ret == '#')
		printf("电脑赢");
	else
		printf("平局");
}

//判断输赢
//判断输赢的代码要告诉我：电脑赢了？玩家赢了？玩家赢？游戏继续？
//电脑赢:#
//玩家赢:*
//平局：Q
//游戏继续：C

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//游戏菜单
	do
	{
		menu();
		printf("请输入（1/0）: ");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			//进入游戏
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
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




