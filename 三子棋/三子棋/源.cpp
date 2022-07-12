#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"game.h"

void meun() {
	printf("*********************************\n");
	printf("       1    ��ʼ��Ϸ             \n");
    printf("       0    ������Ϸ             \n");
	printf("*********************************\n");
}



void game() {
	char ret = 0;
	char board[ROW][COL] = { 0 };//����  ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1) {
		//�������
		PlayerMove(board,ROW,COL);

		DisplayBoard(board, ROW, COL);
		//�ж������Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C') {
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ�����Ӯ
		ret = IsWin(board, ROW, COL);
		
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("YOU WIN\n");
	}
	else if(ret=='#') {
		printf("����Ӯ\n");
	}
	else {
		printf("ƽ��\n");
	}
}


void test() {
	int input = 0;//����Ҫ����
	srand((unsigned int)time(NULL));//srand ���صĵ���time-t ��unsignedǿת���޷�������

	do {
		//int input = 0; //C����ȫ�ֱ���Ҫ��ǰ��
		meun();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("������\n");
			game();
			break;
		default:
			printf("ѡ�����!!!\n");
			break;
		}
		
	} while (input);

}


int main() {
	
	test();

	return 0;
}