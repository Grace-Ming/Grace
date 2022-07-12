#include <stdio.h>
#include<stdlib.h>//调用随机数
#include<time.h>//调用时间戳

#define   ROW   3
#define   COL   3


//声明
// 接收数据
void  InitBoard(char board[ROW][COL], int row, int col);
void  DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//玩家赢‘*’  电脑赢‘#’  平局‘q’   继续‘A’
char IsWin(char board[ROW][COL], int row, int col);
