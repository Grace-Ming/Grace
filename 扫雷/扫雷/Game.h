#pragma once

#include<stdio.h>
#include<stdlib.h>//����srand
#include<time.h>//����ʱ���


#define  ROW 9
#define  COL 9

#define  ROWS 9+2
#define  COLS 9+2
#define  EASY_COUNT 10

//����
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//�к���
void DisplayBoard(char board[ROWS][COLS], int row,int col);
void SetMina(char board[ROWS][COLS], int row, int col);
void FinMina(char mina[ROWS][COLS], char show[ROWS][COLS], int row,int col);