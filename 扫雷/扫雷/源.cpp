#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"Game.h"


void menu() {//扫雷
	printf("        1   开始游戏        \n");
	printf("        0   退出游戏        \n");
}



void game() {
	//雷的信息存储
   // 1  布置好的雷的信息
	char mina[ROWS][COLS] = { 0 };//后台系统的
	//2  排查出的雷的信息
	char show[ROWS][COLS] = { 0 };//玩家看到的
	//3 初始化
	InitBoard(mina, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//打印扫雷
	//DisplayBoard(mina, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMina(mina, ROW, COL);
	//DisplayBoard(mina, ROW, COL);
	//扫雷
	FinMina(mina, show, ROW, COL);

}




int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("退出游戏\n");
				break;
		case 1:
			game();
			break;
		default:
			printf("输入错误\n");
			break;
		}
		
	} while(input);


	return 0;
}