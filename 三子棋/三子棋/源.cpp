#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"game.h"

void meun() {
	printf("*********************************\n");
	printf("       1    开始游戏             \n");
    printf("       0    结束游戏             \n");
	printf("*********************************\n");
}



void game() {
	char ret = 0;
	char board[ROW][COL] = { 0 };//棋盘  全部空格
	//初始化键盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1) {
		//玩家下棋
		PlayerMove(board,ROW,COL);

		DisplayBoard(board, ROW, COL);
		//判断玩家输赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C') {
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑输赢
		ret = IsWin(board, ROW, COL);
		
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("YOU WIN\n");
	}
	else if(ret=='#') {
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
}


void test() {
	int input = 0;//变量要放这
	srand((unsigned int)time(NULL));//srand 返回的的是time-t 用unsigned强转成无符号数字

	do {
		//int input = 0; //C语言全局变量要放前面
		meun();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("三子棋\n");
			game();
			break;
		default:
			printf("选择错误!!!\n");
			break;
		}
		
	} while (input);

}


int main() {
	
	test();

	return 0;
}