#define _CRT_SECURE_NO_WARNINGS
#include "Bricks.h"


int map[ROW][COL] = { 0 };
void InitMap() {//初始化
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			map[i][j] = rand() % 3 + 1;//任何数取3的余数 只有0-2 +1 就成1-3
		}
	}
}

void DrawMap() {
	setlinecolor(BLACK);//设置线条颜色

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
		{
			int x = WIDTH * j;//确定砖块位置和大小  宽乘列
			int y = HEIGHT * i;  //高乘行

			switch (map[i][j]) {//调用map
			case 0:
				break;
			case 1:
				setfillcolor(YELLOW);//填充颜色
				fillrectangle(x, y, x + WIDTH, y + HEIGHT);//矩形窗口
				break;
			case 2:
				setfillcolor(RED);
				fillrectangle(x, y, x + WIDTH, y + HEIGHT);
				break;
			case 3:
				setfillcolor(BLUE);
				fillrectangle(x, y, x + WIDTH, y + HEIGHT);
				break;
			}
		}
	}
}



  //                     取中                 木板位置             木板大小      木板宽度
struct Board board = { (WIDTH * COL)/2-100, (WIDTH * ROW)- HEIGHT,(WIDTH * COL)/4,HEIGHT,1,WHITE };//创建底木板
void DrawBoard() {//底层木板
	setfillcolor(board.color);
	fillrectangle(board.x, board.y, board.x + board.w, board.y + board.h);//???
}


//控制木板
void keyDown() {//控制木板 c里面有的输入函数 -getch(直接读取)  scanf(标准输入) getchar(输出字符) gets(输入字符串) 
	//异步函数输入
	if ((GetAsyncKeyState('A') || GetAsyncKeyState(VK_LEFT))&&board.x>=0) {//左键
		board.x -= board.speed;
	}
	//                                  木板左上角的坐标 加上本身长度 要小于窗口的长度
	if ((GetAsyncKeyState('D') || GetAsyncKeyState(VK_RIGHT))&&board.x+board.w<=WIDTH*COL) {//右键
		board.x += board.speed;
	}
}


//创建球
struct Ball ball = { 400,300,15,5,-5,GREEN };
void DrawBall() {//球
	setfillcolor(ball.color);
	fillcircle(ball.x, ball.y, ball.r);//圆
}


//消除砖块
int HitBrick() {
	int j = ball.x / WIDTH;//球所在行和列   x
	int i = (ball.y - ball.r) / HEIGHT;//   y
	if (i < ROW && j < COL && map[i][j] != 0) {
		map[i][j] = 0;
		return 1;
	}
	return 0;
}


void MoveBall() {//移动球
	if (ball.x - ball.r <= 0 || ball.x + ball.r >= WIDTH * COL) {
		ball.dx =- ball.dx;//先用再减
	}
	if (ball.y - ball.r <= 0 || HitBrick() || HitBoard())/*ball.y + ball.r >= WIDTH * COL)*/ {
		ball.dy =- ball.dy;
	}

	ball.x += ball.dx;
	ball.y += ball.dy;
}

int HitBoard() {//撞木板
	if (ball.y + ball.r == board.y) {
		if (ball.x >= board.x && ball.x <= board.x + board.w) {
			return 1;
		}
	}
	return 0;
}

//游戏结束
int GameOver() {
	if (ball.y + ball.r > board.y) {
		return 1;
	}
	return 0;
}

int GameWin() {//赢了结束
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] != 0) {
				return 0;
			}
		}
	}
	return 1;
}
