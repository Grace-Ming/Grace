#define _CRT_SECURE_NO_WARNINGS

#include"Game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set) {//��ʼ��
	int a, b = 0;
	for (a = 0; a < rows; a++) {
		for (b = 0; b < cols; b++) {
			board[a][b] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i, j = 0;           //����������  ROW 9    COL  9
	//��ӡ�к�
	for (i = 0; i <=col; i++) {
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <=col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
}



//������
void SetMina(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
    }
}





int get_mina_count(char mina[ROWS][COLS], int x, int y) {

 return mina[x - 1][y] +
		mina[x - 1][y - 1] +
		mina[x][y - 1] +
		mina[x + 1][y - 1] +
		mina[x + 1][y] +
		mina[x + 1][y + 1] +
		mina[x][y + 1] +
		mina[x - 1][y + 1] - 8 * '0';
}

void FinMina(char mina[ROWS][COLS], char show[ROWS][COLS], int row, int col) {

	int x = 0;
	int y = 0;
	int win = 0;//����������Ϸ
	//9*9-10  71
	while (win<row*col-EASY_COUNT) {
		printf("�������Ų��׵����꣺");
		scanf("%d%d", &x, &y);
		//����Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mina[x][y] == '1') {
				printf("���ź����㱻ը����\n");
				DisplayBoard(mina, row, col);
				break;
			}
			//������
			else {
				//������Χ������
				int count = get_mina_count(mina, x, y);
				show[x][y] = count + '0';//�����ֱ���ַ�
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else {
			printf("����Ƿ������������룺\n");
		}
	}
	if (win == row * col - EASY_COUNT) {//�ж� ��Ȼbreak������ͨ����
		printf("��ϲͨ��\n");
		DisplayBoard(mina, row, col);
	}
}