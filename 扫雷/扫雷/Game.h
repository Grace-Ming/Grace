#pragma once

#include<stdio.h>
#include<stdlib.h>//调用srand
#include<time.h>//调用时间戳


#define  ROW 9
#define  COL 9

#define  ROWS 9+2
#define  COLS 9+2
#define  EASY_COUNT 10

//声明
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//行和列
void DisplayBoard(char board[ROWS][COLS], int row,int col);
void SetMina(char board[ROWS][COLS], int row, int col);
void FinMina(char mina[ROWS][COLS], char show[ROWS][COLS], int row,int col);