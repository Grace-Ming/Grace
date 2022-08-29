#define _CRT_SECURE_NO_WARNINGS
#include "Bricks.h"


int map[ROW][COL] = { 0 };
void InitMap() {//��ʼ��
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			map[i][j] = rand() % 3 + 1;//�κ���ȡ3������ ֻ��0-2 +1 �ͳ�1-3
		}
	}
}

void DrawMap() {
	setlinecolor(BLACK);//����������ɫ

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
		{
			int x = WIDTH * j;//ȷ��ש��λ�úʹ�С  �����
			int y = HEIGHT * i;  //�߳���

			switch (map[i][j]) {//����map
			case 0:
				break;
			case 1:
				setfillcolor(YELLOW);//�����ɫ
				fillrectangle(x, y, x + WIDTH, y + HEIGHT);//���δ���
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



  //                     ȡ��                 ľ��λ��             ľ���С      ľ����
struct Board board = { (WIDTH * COL)/2-100, (WIDTH * ROW)- HEIGHT,(WIDTH * COL)/4,HEIGHT,1,WHITE };//������ľ��
void DrawBoard() {//�ײ�ľ��
	setfillcolor(board.color);
	fillrectangle(board.x, board.y, board.x + board.w, board.y + board.h);//???
}


//����ľ��
void keyDown() {//����ľ�� c�����е����뺯�� -getch(ֱ�Ӷ�ȡ)  scanf(��׼����) getchar(����ַ�) gets(�����ַ���) 
	//�첽��������
	if ((GetAsyncKeyState('A') || GetAsyncKeyState(VK_LEFT))&&board.x>=0) {//���
		board.x -= board.speed;
	}
	//                                  ľ�����Ͻǵ����� ���ϱ����� ҪС�ڴ��ڵĳ���
	if ((GetAsyncKeyState('D') || GetAsyncKeyState(VK_RIGHT))&&board.x+board.w<=WIDTH*COL) {//�Ҽ�
		board.x += board.speed;
	}
}


//������
struct Ball ball = { 400,300,15,5,-5,GREEN };
void DrawBall() {//��
	setfillcolor(ball.color);
	fillcircle(ball.x, ball.y, ball.r);//Բ
}


//����ש��
int HitBrick() {
	int j = ball.x / WIDTH;//�������к���   x
	int i = (ball.y - ball.r) / HEIGHT;//   y
	if (i < ROW && j < COL && map[i][j] != 0) {
		map[i][j] = 0;
		return 1;
	}
	return 0;
}


void MoveBall() {//�ƶ���
	if (ball.x - ball.r <= 0 || ball.x + ball.r >= WIDTH * COL) {
		ball.dx =- ball.dx;//�����ټ�
	}
	if (ball.y - ball.r <= 0 || HitBrick() || HitBoard())/*ball.y + ball.r >= WIDTH * COL)*/ {
		ball.dy =- ball.dy;
	}

	ball.x += ball.dx;
	ball.y += ball.dy;
}

int HitBoard() {//ײľ��
	if (ball.y + ball.r == board.y) {
		if (ball.x >= board.x && ball.x <= board.x + board.w) {
			return 1;
		}
	}
	return 0;
}

//��Ϸ����
int GameOver() {
	if (ball.y + ball.r > board.y) {
		return 1;
	}
	return 0;
}

int GameWin() {//Ӯ�˽���
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
