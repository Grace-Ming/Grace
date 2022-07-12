#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col) {//初始化数组为空格
	int a = 0;
	int b = 0;
	for (a = 0; a < row; a++) {
		for (b = 0; b < col; b++) {
			board[a][b] = ' ';
		}
	}

}


void  DisplayBoard(char board[ROW][COL], int row, int col) {//打印棋盘
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			//打印一行的数据
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}	
		printf(("\n"));
		//打印分割行
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if(j<col-1)
				printf("|");
			}
			printf("\n");
		}
	}
}


void PlayerMove(char board[ROW][COL], int row, int col) {

	int a = 0;
	int b = 0;
	printf("玩家走：\n");
	while (1) {
		printf("请输入要下的坐标：");
		scanf("%d %d", &a, &b);
		if (a >= 1 && a <= ROW, b >= 1 && b <= COL) {

			if (board[a - 1][b - 1] == ' ') {
				board[a - 1][b - 1] = '*';
				break;
			}
			else {
				printf("该位置已有棋，禁止重复下子!!!\n");
			}

		}
		else {
			printf("坐标非法.请重新输入");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {

	printf("电脑走：\n");
	int x = 0;
	int y = 0;
	while (1) {
	x = rand() % row;
	y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}



//返回1 表示棋盘满了
//返回0 表示没满
int IsFull(char board[ROW][COL], int row, int col) {
	int a, b = 0;
	for (a = 0; a < row; a++) {
		for (b = 0; b < col; b++) {
			if (board[a][b] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}



char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//判断横三行
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][i] != ' ') {
			return board[i][1];
		}
	}
	//竖三行
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return board[1][i];
		}
	}
	//斜3行
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
		return board[0][2];
	}
	//判断平局
	if (1 == IsFull(board, ROW, COL)) {
		return 'Q';
	}
	return 'C';
	}
