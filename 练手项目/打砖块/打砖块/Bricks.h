#pragma once

#include<stdio.h>
#include<graphics.h>
#include<conio.h>//����̨�������
#include<time.h>

#define WIDTH 100     //ש����
#define HEIGHT 25     //ש��߶�


#define  ROW 6 //ש��ĸ���
#define  COL 8

//ľ��
struct Board {
	int x;//ľ��λ��  ���Ͻ�
	int y;//ľ��߶�
	int w;//��
	int h;//��
	int speed;//�ƶ��ٶ�
	COLORREF color;//�����ɫ
};

struct Ball {//��
	int x;//Բ������
	int y;//�뾶
	int r;
	int dx;  //����
	int dy; 
	COLORREF color;//�����ɫ
};



void DrawMap();//��Ϸ����

void DrawBoard();//�ײ�ľ��

void keyDown();//����ľ��

void DrawBall();//��

void MoveBall();//�ƶ���

int HitBoard();//ײľ��

int GameOver();//ʧ�ܽ�������

int GameWin();//Ӯ�˽���

void InitMap();//��ʼ��