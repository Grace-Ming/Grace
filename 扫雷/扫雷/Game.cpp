#define _CRT_SECURE_NO_WARNINGS

#include"Game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set) {//初始化
	int a, b = 0;
	for (a = 0; a < rows; a++) {
		for (b = 0; b < cols; b++) {
			board[a][b] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i, j = 0;           //传过来的是  ROW 9    COL  9
	//打印列号
	for (i = 0; i <=col; i++) {
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <=col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
}



//布置雷
void SetMina(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
    }
}





int get_mina_count(char mina[ROWS][COLS], int x, int y) {

 return mina[x - 1][y] +
		mina[x - 1][y - 1] +
		mina[x][y - 1] +
		mina[x + 1][y - 1] +
		mina[x + 1][y] +
		mina[x + 1][y + 1] +
		mina[x][y + 1] +
		mina[x - 1][y + 1] - 8 * '0';
}

void FinMina(char mina[ROWS][COLS], char show[ROWS][COLS], int row, int col) {

	int x = 0;
	int y = 0;
	int win = 0;//用来结束游戏
	//9*9-10  71
	while (win<row*col-EASY_COUNT) {
		printf("请输入排查雷的坐标：");
		scanf("%d%d", &x, &y);
		//坐标合法
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mina[x][y] == '1') {
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mina, row, col);
				break;
			}
			//不是雷
			else {
				//计算周围几个雷
				int count = get_mina_count(mina, x, y);
				show[x][y] = count + '0';//把数字变成字符
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else {
			printf("坐标非法，请重新输入：\n");
		}
	}
	if (win == row * col - EASY_COUNT) {//判断 不然break出来还通关了
		printf("恭喜通关\n");
		DisplayBoard(mina, row, col);
	}
}