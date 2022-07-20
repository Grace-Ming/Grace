#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct S {
//	int a;
//	char c;
//};
//
//void Init(struct S* ps) {//结构体指针传参的方式   传址
//	ps->a = 100;
//	ps->c = 'w';
//}
//
//void Print(struct S pa) {//打印的方式  打印不需要改变数据  就不需要指针形式  传值  尽量使用传址  传值会会压榨内存的开销 让效率变低
//	printf("%d  %c", pa.a, pa.c);
//}
//int main() {
//
//	struct S s = { 0 };
//	Init(&s);
//	Print(s);
//
//	return 0;
//}



//位段、二进制位、、、、为了节省空间、、、、、、、、、、、、、、、、、、、、、
//结构体实现位段的能力  位段的成员必须是 整形  int  unsigned int ，signed int 类型
//位段的成员名后面有一个冒号和一个数字  后面数字不能大于32
//位段的空间是按照4个字节或者1字节的来开辟空间的  char 属于整形家族

//struct A {
//	int _a: 2;//：冒号后面指的是比特位  a 只需要2个比特位
//	int _b: 5;
//	int _c:10;
//	int _d: 33;
//
//};
//int main() {
//	struct A s;
//	printf("%d\n", sizeof(s));//8 ?
//
//	return 0;
//}
//struct S {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main() {
//
//	struct S s={0};
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//  枚举  是一种类型    、、、、、、、、、、、、、、、、、、、、、、
//enum Day {//枚举类型
//	//枚举的可能取值  枚举常量
//	MALE,//0  默认0开始  依次递增1
//	FEMALE,//1
//	SECRET,//2
//
//};
//enum Color {
//	RED=2,//也可以自己赋值初始值  但之后就不能改了 常量不可改
//	GREEN=4,//
//	BLUE=8,
//};
//int main() {
//
//	enum Day s = MALE;
//	enum Color c = RED;
//
//
//	return 0;
//}


//union 联合  联合体 共用体  特点是这类型定义的变量包括一系列成员  特征是这些成员共用同一块空间
//大小至少是最大成员的大小  两者不能同时用 同一时间 只能用其中一个
//union Un {//总体还是4
//	char c;//1
//	int i;//4
//};
//
//int main() {
//
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}、

int checksys() {//判断小端大端

	union Us {
		char c;
		int i;

	}u;
	u.i = 1;
	return  u.c;
}
int main() {

	int ret = checksys();
	if (1 == ret) {
		printf("小端");
	}
	else
		printf("大端");

	return 0;
}