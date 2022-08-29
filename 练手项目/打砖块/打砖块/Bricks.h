#pragma once

#include<stdio.h>
#include<graphics.h>
#include<conio.h>//控制台输出函数
#include<time.h>

#define WIDTH 100     //砖块宽度
#define HEIGHT 25     //砖块高度


#define  ROW 6 //砖块的个数
#define  COL 8

//木板
struct Board {
	int x;//木板位置  左上角
	int y;//木板高度
	int w;//长
	int h;//宽
	int speed;//移动速度
	COLORREF color;//填充颜色
};

struct Ball {//球
	int x;//圆心坐标
	int y;//半径
	int r;
	int dx;  //增量
	int dy; 
	COLORREF color;//填充颜色
};



void DrawMap();//游戏窗口

void DrawBoard();//底层木板

void keyDown();//控制木板

void DrawBall();//球

void MoveBall();//移动球

int HitBoard();//撞木板

int GameOver();//失败结束窗口

int GameWin();//赢了结束

void InitMap();//初始化