#define _CRT_SECURE_NO_WARNINGS
#include "Txr.h"

//0  ���1000�����ѵ���Ϣ  ���� �绰 �Ա� סַ ����
//1  ���Ӻ�����Ϣ 
//2   ɾ��ָ�����ֵ���Ϣ 
//3  ���Һ�����Ϣ
//4   �޸ĺ�����Ϣ  
//5  ��ӡ������Ϣ   
//6   ����

void menu() {

	printf("1  ���ӣ�add��          2  ɾ��(del)               \n");
	printf("3  ���� (search)        4  �޸�(modify)            \n");
	printf("5  ��ʾ��show��         6  ����(sort)              \n");
	printf("           0   �˳���exit��                        \n");
}


int main() {
	int Iput = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼ �������1000��Ԫ�������size
	 //int size=0;
	//struct PeoInfo con[MAX];// ���Է�װΪ����ĺ���  
    //��ʼ��ͨ��¼
	InitContact(&con);
	
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &Iput);
		switch (Iput)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case 0:
			printf("�������\n");
			break;

		default:
			printf("������� ����������\n");
			break;
		}


	} while (Iput);


	return 0;
}