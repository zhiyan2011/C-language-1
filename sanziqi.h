#define ROW 16
#define COL 16
#define wincount 5
#include <stdio.h>
#include <time.h>
#include<stdlib.h>


// initial board
void initboard(char board[ROW][COL], int row, int col);
// display board
void displayboard(char board[ROW][COL],int row, int col);
// player move
void Playermove(char board[ROW][COL], int row, int col);
// computer move
void Computermove(char board[ROW][COL], int row, int col);
// check who win
// player win
//  computer win
// 平局
// continue
char is_win(char board[ROW][COL], int row, int col);