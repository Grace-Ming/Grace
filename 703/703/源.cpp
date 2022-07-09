#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//void test1(int arr[]) {
//	printf("%d\n", sizeof(arr));//4
//}
//
//void test2(char ch[]) {
//	printf("%d\n", sizeof(ch));//4
//}
//
//int main(){
//
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//
//	test1(arr);//4  传过去的是指针 指针的大小是4 或者8
//	test2(ch);//4  传过去的是指针 指针的大小是4 或者8
//	return 0;
//}



//
//int main() {
//
//	int a = 5;
//	int b = 3;
//	int c = a && b;
//	printf("%d\n", c);//结果为1   有一个为0 则为0 两个为0 也为0
//	int d = a || b;
//	printf("%d\n", d);//结果为1  只有当2个为0 才为0 
//
//	return 0;
//}


//
//int main() {
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//&&后面为真 后面就要算 为假就放弃
//	//a先使用为0 为假  0&&b &&左边为假 所以后面的就直接不算了 但a使用后就自增了 结果就为1234
//     i = a++ || ++b || d++;//只要前面为真 因为真或假 依旧为真 后面就放弃
//	//a先使用为0 为假 但b为真 0||b 为真 为真 后面就不会再算了 因为1||0  还是为真 后面就不用算了 所以1334
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	                                
//	return 0;
//}




//int main() {
//	
//	int a = 3;
//	int b = 5;
//	int num = 0;
//	if (a > 5) {
//		num = 3;
//	}
//	else {
//		num = -3;
//	}
//	num=(a > 5 ? 3 : -3);
//	return 0;
//}


//
//
/////,逗号表达式 就是用逗号隔开的多个表达式，逗号表达式，从左到右依次执行，整个表达式的结果就是最后一个表达式的结果
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//等于13
//
//	if(a=b+1,c=a/2,d>0)// 实际起到作用的 就d>0 结果为真 
//	printf("%d\n", c);
//	return 0;
//}
//
//a = getva();
//countca(a);
//while (a > 0) {
//	a = getva();
//	countca(a);
//}
// 逗号表达式对上面的改写  while(a=getva(),countca(a),a>0){}
//



//int main() {
//	//[] 下标访问操作符 有2个操作数
//	int a[10] = { 0 };
//	a[4] = 10;
//
//
//	return 0;
//}

////
//int a = 10;
//int b = 20;
//()调用函数时 就是函数调用操作符
//int max=get_max（a,b） 3个操作数 max a b  当（）没操作数的时候 就是调用max


////结构体操作符
//struct Stu {//结构体类型
//	char name[20];
//	int age;
//	char id[20];
//};
//int main() {
//
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1 并初始化
//	struct Stu s1 = {"张三",20,"20166435"};
//	struct Stu* ps = &s1;
//
//	//结构体指针->成员名
//	printf("%s\n", (*ps).name);//zhang san 
//	printf("%d\n", ps->age);//20
//	printf("%s\n", ps->id);//20166435
//
//
//	printf("%s\n", s1.name);//zhang san 
//	printf("%d\n", s1.age);//20
//	printf("%s\n", s1.id);//20166435
//	//访问  结构体变量.成员名
//	return 0;
//}



//int main() {        ///只要参与表达式运算 就会发生整形提升  
//
//	char a = 3;
//	//0000000000000000000000000011
//	//00000011   char是一个字节  会截断  8个比特
//	char b = 127;
//	//0000000000000000000001111111
//	//01111111
//	char c = a + b;
//	//10000010
//	//1111111111111111111110000010  按高位补
//	//1111111111111111111110000001
//	//1000000000000000000001111110
//	printf("%d\n", c);//-126
//
//	return 0;
//}
//int main() {
//	char c = 1;
//
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4  +c 就变成了一个整形运算
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}


//
//int main() {
//
//	int a = 20;
//	int b = 10;
//	int c = b +a * 3;//a*b+3
//	printf("%d\n", c);//70   203
//	return 0;
//}


int main() {



	return 0;
}