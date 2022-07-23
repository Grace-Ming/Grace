#define _CRT_SECURE_NO_WARNINGS
#include "Txr.h"

void InitContact(struct Contact* ps) {//��ʼ��

	memset(ps->data, 0,sizeof(ps->data));//�ڴ�����  ��ʼ��Ϊ0
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}


void AddContact(struct Contact* ps) {//����ͨѶ¼

	if (ps->size == MAX) {
		printf("ͨѶ¼�������޷�����");
	}
	else {
		printf("���������֣�");
		scanf("%s", ps->data[ps->size].name);//con�ﺬ�� data�ҵ����� size�ҵ��±�  ���ҵ�����
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));//��Ϊ�������� ������Ҫȡ��ַ
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		
		ps->size++;//Ԫ��������һ��
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* ps) {//��ʾ

	if (ps->size == 0) {
		printf("ͨѶ¼Ϊ��\n");
	}
	else {
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");// 20s 4s ���ǿ��ƴ�ӡ�����ַ� λ��    \t�տ�
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",//- �����
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
//static ���α���  ���εĺ���ֻ���ڵ�ǰ�ļ���ʹ��
static int FindByname(const struct Contact* ps, char name[MAX_name]) {//��Ϊ���溯��ʹ����const  ������ҲҪ���� ��Ȼ���Ǵ�����һ������ȫ����
	int i = 0;
    for (i = 0; i < ps->size; i++) {
	if (0 == strcmp(ps->data[i].name, name)) {
		return i;
	 }
   }
	return -1;//�Ҳ��������
}

void DelContact(struct Contact* ps){//ɾ��ָ������ϵ��
	char name[MAX_name];
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", name);//���鱾����ǵ�ַ ���Բ���Ҫȡ��ַ
	//1����Ҫɾ����λ��  2ɾ��
	int pos=FindByname(ps,name);//�ҵ����ַ������������±� �Ҳ�������-1
	//int i = 0;
	//for (i = 0; i < ps->size; i++){
	//	if (0 == strcmp(ps->data[i].name, name)) {//������Ĵ����������  ���°�װһ������
	//		break;
	//	}
	//}
	if (pos == -1) {
		printf("Ҫɾ�����˲�����\n");
	}
	else {
		//ɾ������
		int j = 0;
		for ( j = pos; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact *ps) {//����  
	char name[MAX_name];
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	//int i = 0;
	//for (i = 0; i < ps->size; i++) {
	//	if (0 == strcmp(ps->data[i].name, name)) {
	//		break;
	//	}
    //	}
	int pos = FindByname(ps, name);
	if (pos == -1) {
		printf("Ҫ���ҵ��˲�����\n");
	}
	else {
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");// 20s 4s ���ǿ��ƴ�ӡ�����ַ� λ��    \t�տ�
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",//- �����
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps) {
	char name[MAX_name];
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	int pos=FindByname(ps, name);
	if (pos == -1) {
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else {
		printf("���������֣�");
		scanf("%s", ps->data[pos].name);//con�ﺬ�� data�ҵ����� size�ҵ��±�  ���ҵ�����
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].age));//��Ϊ�������� ������Ҫȡ��ַ
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[pos].addr);
	}
}



void SortContact(struct Contact* ps) {



}
