#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d, \n", *(a + 1), *(ptr - 1), );
//	//     2    5       因为取地址a 是跳过整个数组  再强制转换int类型  ptr是后面数组第一元素  再解应用减1 就是5了
//	return 0;
//}


//struct test {
//
//	int Num;
//	char* pcName;
//	short sDate;
//	char cah[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000  如下表达式的值分别为多少
////已知 结构体test类型的变量大小是20个字节
//int main() {
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);    14
//	printf("%p\n",(unsigned long) p + 0x1);  1
//	printf("%p\n",(unsigned int*)p + 0x1);   4
//
//	return 0;
//}


//
//int main() {
//	                        //16进制
//	int a[4] = { 1,2,3,4 };//01 00 00 00   02 00 00 00   03 00 00 00  04 00 00 00
//	int* prt1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", prt1[-1], *ptr2);// 4 2000000 200000是地址强制转换的
//	                                  //02 00 00 00
//	return 0;
//}



//int main() {
//	//  逗号表达式   1      3     5          逗号表达式以后面的为准   数组应该用大括号的
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];//赋值不需要*
//	printf("%d\n", p[0]);//1   
//
//
//	return 0;
//}


int main() {

	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = (int*)(&aa + 1);//这是跳整个数组
	int* p2 = (int*)(*(aa + 1));
	//                 aa+1 等价aa[1] 即第二行
	printf("%d  %d\n", *(p1 - 1), *(p2 - 1));//10 5

	return 0;
}



int main() {

	const char* a[] = { "wprd","atd","alili" };
	const char** pa = a;
	pa++;
	printf("%s\n", *pa);//atd
	return 0;
}


int main() {

	const char* c[] = { "enter","New","pitn","fieng" };
	const char** cp[] = { c + 3,c + 2,c + 1,c };
	const char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);

	return 0;
}



