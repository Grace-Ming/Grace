#define _CRT_SECURE_NO_WARNINGS
#include "Txr.h"

void InitContact(struct Contact* ps) {//初始化

	memset(ps->data, 0,sizeof(ps->data));//内存设置  初始化为0
	ps->size = 0;//设置通讯录最初只有0个元素
}


void AddContact(struct Contact* ps) {//增加通讯录

	if (ps->size == MAX) {
		printf("通讯录已满，无法增加");
	}
	else {
		printf("请输入名字：");
		scanf("%s", ps->data[ps->size].name);//con里含有 data找到数组 size找到下标  再找到名字
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));//因为不是数组 所以需要取地址
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);
		
		ps->size++;//元素增加了一个
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* ps) {//显示

	if (ps->size == 0) {
		printf("通讯录为空\n");
	}
	else {
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");// 20s 4s 就是控制打印几个字符 位数    \t空开
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",//- 左对齐
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
//static 修饰变量  修饰的函数只能在当前文件中使用
static int FindByname(const struct Contact* ps, char name[MAX_name]) {//因为下面函数使用了const  所以这也要加上 不然就是传给了一个不安全的数
	int i = 0;
    for (i = 0; i < ps->size; i++) {
	if (0 == strcmp(ps->data[i].name, name)) {
		return i;
	 }
   }
	return -1;//找不到的情况
}

void DelContact(struct Contact* ps){//删除指定的联系人
	char name[MAX_name];
	printf("请输入要删除人的名字：");
	scanf("%s", name);//数组本身就是地址 所以不需要取地址
	//1查找要删除的位置  2删除
	int pos=FindByname(ps,name);//找到名字返回名字所在下标 找不到返回-1
	//int i = 0;
	//for (i = 0; i < ps->size; i++){
	//	if (0 == strcmp(ps->data[i].name, name)) {//和下面的代码出现冗余  重新包装一个函数
	//		break;
	//	}
	//}
	if (pos == -1) {
		printf("要删除的人不存在\n");
	}
	else {
		//删除数据
		int j = 0;
		for ( j = pos; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact *ps) {//查找  
	char name[MAX_name];
	printf("请输入要查找人的名字：");
	scanf("%s", name);
	//int i = 0;
	//for (i = 0; i < ps->size; i++) {
	//	if (0 == strcmp(ps->data[i].name, name)) {
	//		break;
	//	}
    //	}
	int pos = FindByname(ps, name);
	if (pos == -1) {
		printf("要查找的人不存在\n");
	}
	else {
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");// 20s 4s 就是控制打印几个字符 位数    \t空开
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",//- 左对齐
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps) {
	char name[MAX_name];
	printf("请输入要修改人的名字：");
	scanf("%s", name);
	int pos=FindByname(ps, name);
	if (pos == -1) {
		printf("要修改人的信息不存在\n");
	}
	else {
		printf("请输入名字：");
		scanf("%s", ps->data[pos].name);//con里含有 data找到数组 size找到下标  再找到名字
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));//因为不是数组 所以需要取地址
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);
	}
}



void SortContact(struct Contact* ps) {



}
