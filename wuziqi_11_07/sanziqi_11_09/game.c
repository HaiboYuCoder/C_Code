#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void init_board(char board[HAN][LIE], int han, int lie)
{
	int p = 0;
	for (p = 0; p <= han - 1; p++)
	{
		int q = 0;
		for (q = 0; q <= lie - 1; q++)
		{
			board[p][q] = ' ';
		}
	}
}

void print_board(char board[HAN][LIE], int han, int lie)
{
	int a = 0;
	for (a = 0; a <= han - 1; a++)
	{
		int b = 0;
		for (b = 0; b <= lie - 1; b++)
		{
			printf(" %c |", board[a][b]);
		}
		printf("\n");
		int c = 0;
		for (c = 0; c <= lie - 1; c++)
		{
			printf("---|");
		}
		printf("\n");
	}
}

void player_move(char board[HAN][LIE], int han, int lie)
{

	while (1)
	{
		printf("玩家下棋\n");
		int i = 0;
		int j = 0;
		printf("请输入想下的坐标，比如第一行第一列：1 1\n");
		printf("请输入：");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= han && j >= 1 && j <= lie)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("已填写过，请重新输入");
			}
		}
		else
		{
			printf("输入错误，请重新输入");
		}
	}
	count++;
}

void computerr_move(char board[HAN][LIE], int han, int lie)
{
	printf("\n");
	printf("电脑下棋\n");
	int x = rand() % han;
	int y = rand() % lie;
	while (1)
	{
		if (board[x][y] == ' ');
		{
			board[x][y] = '#';
			break;
		}
	}
	count++;
}

//我希望is_full这个函数只是为了支持is_win函数的，只是在is_win函数内部使用
//那我们就没必要在头文件中声明
// 
//判断棋盘是否满了
static int is_full(char board[HAN][LIE], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char board[HAN][LIE], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//平局？
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}

	//继续
	//没有玩家或者电脑赢，也没有平局，游戏继续
	return 'C';
}
