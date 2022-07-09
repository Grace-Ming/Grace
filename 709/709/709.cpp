#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>]
//
//void test(int arr[]) {//传过来的是首字符  就是地址 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//  1        如果64位平台 结果为2   因为字节大小只有4和8 
//}
//int main() {
//
//	int arr[] = { 10 };
//	test(arr);
//
//	return 0;
//}


//   指针的写法   、、、、、、、、、、、、、、、、、、、、、、、、、、、、
//int main() {
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//int main() {
//
//	char arr[] = "Grace";
//	char* pc = arr;// 因为数组名本身就是地址  所以不用取地址符号
//	printf("%s\n", arr); //Grace
//	printf("%s\n", pc);//Grace
//
//	return 0;
//}
//int main() {
//
//	const char* p = "Grace";//"Grace" 是一个常量字符串  实际是吧首字符G这个字符地址放到P里面了
//	// *p='w'   这样会爆段错误  所以加上const修饰 不能被修改
//	//Segmentfault fault  断错误
//	return 0;
//}



//int main() {
//
//	char arr1[] = "Grace";
//	char arr2[] = "Grace";
//	const char* p1 = "Grace";
//	const char* p2 = "Grace";
//	if (arr1 == arr2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");//打印这个 因为在内存存储的肯定是2个空间
//	}
//	if (p1 == p2) {
//		printf("hehe\n");//常量字符串  不可被修改  所以这回不管p1  p2指向的都是同一个地址
//	}
//	else {
//		printf("haha\n");
//	}
//
//	return 0;
//}


// 指针数组
//int main() {
//
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* pch[4];//存放整形指针的数组  指针数组
//	char* pcrr[5];//存放字符指针的数组  指针数组
//
//	return 0;
//}


//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//
//		printf("%d ", *(arr[i]));//记得加*号  10 20 30 40
//	}
//	return 0;
//}



//指针数组的用法、、、、、、、、、、、、、、、、、、、、、
//int main() {
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };//数组名是本身就是地址 所以不用取地址符号
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d  ", (*(parr[i]) + j));//应该加j 而不是1 因为1不会保存  会重置 ++也行
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//int main() {
//
//	int* P = NULL;//整形指针  指向整形的指针  可存放整形的地址
//	char* PC = NULL;//字符指针  指向字符的指针  可存放字符的地址
// char* arr[5];
// char*(*pa)[5]=&arr;
//  char*   (*pa)[5]  =&arr;
//	//数组指针   指向数组的指针  可存放数组的地址
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p[10] = &arr;  []比*号优先级别高 所以用（*p）起来   不然就成数组 而不是数组指针
//	int(*p)[10] = &arr;
//	return 0;
//}

//&arr+1  是跳过一个数组   arr+1 是跳过一个元素


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)[
//		printf("%d ", *(p + i));//因为arr是首地址   加*号就直接去存储地方读取  +i就是移动的距离
//	]
//
//
//	//int(*p)[10] = &arr;
//	///*for (i = 0; i < 10; i++) {
//	//	printf("%d ", (*p)[i]);         // 这个 要在2维数组才方便一些
//	//}*/
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d ", *(*p+i));
//	//}
//
//	return 0;
//}


        //参数是数组的形式
//void print(int arr[3][5], int x, int y) {
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < x; a++) {
//		for (b = 0; b < y; b++) {
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//}
     //   参数是指针的形式 
//void print1(int(*p)[5], int x, int y) {
//
//	int i = 0;
//	for (i = 0; i < x; i++) {
//		int j = 0;
//		for (j = 0; j < y; j++) {
//        //  printf("%d  ", p[i][j]);  //和下面是等价的
//		//	printf("%d  ", (*(p + i))[j]);
////                  *        (p+i)      j       
////			  解引用        找到地址   移动个数  
// 
//      printf("%d ",*(p[i]+j));//和下面是等价的
//		//printf("%d ",*(* (p + i)+j));//  
//	//     *            *            （p+1）                       j 
////       解引用       表示指针变量  数组移动距离       在一行里移动的元素个数
//		}
//		printf("\n");
//	}
//
//}
//
//int main() {
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print(arr,3,5);//  二维数组传参 必须要有3个参数  数组  行 列 
//	print1(arr, 3, 5);
//	return 0;
//}


//
//int main() {
//
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    int* p = arr;
//    for (i = 0; i < 10; i++) {
//        printf("%d ",  * (p + i));
//        //       *          p[i]  arr[i]  (p+i) (arr+i) 一样的
//        //  解引用                移动元素个数
//    }
//
//    return 0;
//}


int arr[5];// 是一个5个元素的整形数组
int* arr1[10];//是一个数组 数组有10个元素 每个元素类型是int*  是指针数组
int(*arr2)[10];//是一个指针 指向一个有10个元素的数组  类型是int  数组指针
int(*arr3[10])[5];//是一个数组  该数组有10个元素 每个元素是一个数组指针 该数组指针有5个元素 每个元素是int
