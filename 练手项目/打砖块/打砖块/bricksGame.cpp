#define _CRT_SECURE_NO_WARNINGS
#include "Bricks.h"


//��־
//1 ���Ƶ�ͼ
//2 ľ��
//3 ��
//4 ����ש�� ��ײľ�巴��


//��ʱ�� 
int Timer(int duration, int i) {
	static int begin[10];//��̬ 
	int end = clock();//��ȡ��ǰʱ��
	if (end - begin[i] >= duration) {
		begin[i] = end;//�´ο�ʼ��Ϊ�ϴν���
		return 1;
	}
	return 0;
}
HWND hwnd;//���ھ��


int main() {

	srand((unsigned int)time(NULL));
	hwnd=initgraph(WIDTH * COL, WIDTH * ROW,1);//��Ϸ����   1�ǿ���̨
	InitMap();
	BeginBatchDraw();//˫���� ��������
	while (1) {

		cleardevice();//ˢ����Ļ
		DrawMap();
		DrawBoard();
		DrawBall();
		if(Timer(15, 0))
		MoveBall();
	//Sleep(20);

		keyDown();
		if (GameOver()) {
			MessageBox(hwnd,"Game over","������Ϸ",MB_OK);//�Ի���
			break;
		}
		if (GameWin()) {
			FlushBatchDraw();//�������һ������
			MessageBox(hwnd, "You Win", "��ϲͨ��", MB_OK);//�Ի���
			break;
		}
		
		FlushBatchDraw();//��ʾÿһ֡
	}
	EndBatchDraw();//����˫����

	closegraph();//�ر�


	return 0;
}