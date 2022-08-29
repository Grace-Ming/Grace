#define _CRT_SECURE_NO_WARNINGS
#include "Bricks.h"


//日志
//1 绘制地图
//2 木板
//3 球
//4 消除砖块 碰撞木板反射


//定时器 
int Timer(int duration, int i) {
	static int begin[10];//静态 
	int end = clock();//获取当前时间
	if (end - begin[i] >= duration) {
		begin[i] = end;//下次开始变为上次结束
		return 1;
	}
	return 0;
}
HWND hwnd;//窗口句柄


int main() {

	srand((unsigned int)time(NULL));
	hwnd=initgraph(WIDTH * COL, WIDTH * ROW,1);//游戏窗口   1是控制台
	InitMap();
	BeginBatchDraw();//双缓存 避免闪屏
	while (1) {

		cleardevice();//刷新屏幕
		DrawMap();
		DrawBoard();
		DrawBall();
		if(Timer(15, 0))
		MoveBall();
	//Sleep(20);

		keyDown();
		if (GameOver()) {
			MessageBox(hwnd,"Game over","结束游戏",MB_OK);//对话框
			break;
		}
		if (GameWin()) {
			FlushBatchDraw();//消除最后一个方块
			MessageBox(hwnd, "You Win", "恭喜通关", MB_OK);//对话框
			break;
		}
		
		FlushBatchDraw();//显示每一帧
	}
	EndBatchDraw();//结束双缓存

	closegraph();//关闭


	return 0;
}