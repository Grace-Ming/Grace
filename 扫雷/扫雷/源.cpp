#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"Game.h"


void menu() {//ɨ��
	printf("        1   ��ʼ��Ϸ        \n");
	printf("        0   �˳���Ϸ        \n");
}



void game() {
	//�׵���Ϣ�洢
   // 1  ���úõ��׵���Ϣ
	char mina[ROWS][COLS] = { 0 };//��̨ϵͳ��
	//2  �Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//��ҿ�����
	//3 ��ʼ��
	InitBoard(mina, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡɨ��
	//DisplayBoard(mina, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMina(mina, ROW, COL);
	//DisplayBoard(mina, ROW, COL);
	//ɨ��
	FinMina(mina, show, ROW, COL);

}




int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("�˳���Ϸ\n");
				break;
		case 1:
			game();
			break;
		default:
			printf("�������\n");
			break;
		}
		
	} while(input);


	return 0;
}