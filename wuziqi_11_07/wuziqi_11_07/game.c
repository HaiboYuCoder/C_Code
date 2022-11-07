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
			printf(" %c |",board[a][b]);
		}
		printf("\n");
		int c = 0;
		for (c = 0; c <= lie - 1;c++)
		{
			printf("---|");
		}
		printf("\n");
	}
}

void player_move(char board[HAN][LIE], int han, int lie)
{   
	
	while(1)
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

char is_win(char board[HAN][LIE], int han, int lie)
{
	int i = 0;
	int j = 0;
	//每行
	for(i=0;i<=han-1;i++)
	{
		for (j = 0; j <= (lie - 5 - 1); j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3] && board[i][j + 3] == board[i][j + 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//每列
	for (j = 0; j <= lie - 1; j++);
	{
		for (i = 0; i <= han - 5 - 1; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 2][j] == board[i + 3][j] && board[i + 3][j] == board[i + 4][j]&&board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//"\"
	for (i = 0; i <= han - 5 - 1; i++)
	{
		for (j = 0; j <= (lie - 5 - 1); j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3] == board[i + 4][j + 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//"/"
	for (i = 0; i <= han - 5 - 1; i++) 
	{
		for (j = lie - 1; j >= lie - 1 - 5; j--)
		{
			if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] == board[i + 3][j - 3] && board[i + 3][j - 3] == board[i + 4][j - 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	if (count == 100)
	{
		return 'Q';
	}
	return 'C';
}