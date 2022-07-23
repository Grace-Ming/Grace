#pragma once
#include<stdio.h>
#include<string.h>

#define MAX 1000
#define MAX_name 20
#define MAX_sex 5
#define MAX_tele 12
#define MAX_addr 30

enum Option {//枚举默认0开始

	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};


struct PeoInfo {
	char name[MAX_name];//名字
	int age;  //年龄
	char sex[MAX_sex];//性别
	char tele[MAX_tele];//电话
	char addr[MAX_addr];//地址
};

//通讯录类型
struct Contact {
	struct PeoInfo data[MAX];//存放1000个信息
	int size;//记录当前已有的元素个数
};


//声明
void InitContact(struct Contact* ps);//初始化
void AddContact(struct Contact*ps);//添加
void ShowContact(const struct Contact*ps);//只用作显示 不修改  加个const修饰
void DelContact(struct Contact*ps);//删除指定的联系人
void SearchContact(const struct Contact* ps);//查找
void ModifyContact(struct Contact*ps);//修改
void SortContact(struct Contact*ps);
