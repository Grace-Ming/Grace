#define _CRT_SECURE_NO_WARNINGS
#include "Txr.h"

//0  存放1000个好友的信息  名字 电话 性别 住址 年龄
//1  增加好友信息 
//2   删除指定名字的信息 
//3  查找好友信息
//4   修改好友信息  
//5  打印好友信息   
//6   排序

void menu() {

	printf("1  增加（add）          2  删除(del)               \n");
	printf("3  查找 (search)        4  修改(modify)            \n");
	printf("5  显示（show）         6  排序(sort)              \n");
	printf("           0   退出（exit）                        \n");
}


int main() {
	int Iput = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录 里面包含1000的元素数组和size
	 //int size=0;
	//struct PeoInfo con[MAX];// 可以封装为上面的函数  
    //初始化通信录
	InitContact(&con);
	
	do {
		menu();
		printf("请选择：");
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
			printf("程序结束\n");
			break;

		default:
			printf("输入错误 请重新输入\n");
			break;
		}


	} while (Iput);


	return 0;
}