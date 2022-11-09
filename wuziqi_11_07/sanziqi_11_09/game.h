#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HAN 3
#define LIE 3

void init_board(char board[HAN][LIE], int han, int lie);

void print_board(char board[HAN][LIE], int han, int lie);

void player_move(char board[HAN][LIE], int han, int lie);

void computerr_move(char board[HAN][LIE], int han, int lie);

char is_win(char board[HAN][LIE], int, int);

int count;