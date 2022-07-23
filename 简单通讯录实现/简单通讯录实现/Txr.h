#pragma once
#include<stdio.h>
#include<string.h>

#define MAX 1000
#define MAX_name 20
#define MAX_sex 5
#define MAX_tele 12
#define MAX_addr 30

enum Option {//ö��Ĭ��0��ʼ

	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};


struct PeoInfo {
	char name[MAX_name];//����
	int age;  //����
	char sex[MAX_sex];//�Ա�
	char tele[MAX_tele];//�绰
	char addr[MAX_addr];//��ַ
};

//ͨѶ¼����
struct Contact {
	struct PeoInfo data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ���е�Ԫ�ظ���
};


//����
void InitContact(struct Contact* ps);//��ʼ��
void AddContact(struct Contact*ps);//���
void ShowContact(const struct Contact*ps);//ֻ������ʾ ���޸�  �Ӹ�const����
void DelContact(struct Contact*ps);//ɾ��ָ������ϵ��
void SearchContact(const struct Contact* ps);//����
void ModifyContact(struct Contact*ps);//�޸�
void SortContact(struct Contact*ps);
