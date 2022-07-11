#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//计算器
//void menu() {
//	printf("      1  加法      \n");
//	printf("      2  减法      \n");
//	printf("      3  乘法      \n");
//	printf("      4  除法      \n");
//	printf("      0  退出      \n");
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}

//int main() {
//	int a = 0;
//	int x = 0;
//	int y = 0;
//	do {
//      menu();
//	  printf("请选择： ");
//	  scanf("%d", &a);
//	  switch (a) {
//	  case 1:
//		  printf("请输入两个整数操作数：");
//		  scanf("%d%d", &x, &y);
//		 printf("结果为%d\n", Add(x,y));
//		  break;
//	  case 2:
//		  printf("请输入两个整数操作数：");
//		  scanf("%d%d", &x, &y);
//		  printf("结果为%d\n", Sub(x, y));
//		  break;
//	  case 3:
//		  printf("请输入两个整数操作数：");
//		  scanf("%d%d", &x, &y);
//		  printf("结果为%d\n", Mul(x, y));
//		  break;
//	  case 4:
//		  printf("请输入两个整数操作数：");
//		  scanf("%d%d", &x, &y);
//		  printf("结果为%d\n", Div(x, y));
//		  break;
//	  case 0:
//		  break;
//	  default:
//		  printf("输入错误，请重新输入\n");
//		  break;
//	  }
//
//
//	} while (a);
//
//	return 0;
//}


//void CaLc(int(*pf)(int, int)) {//对上面的优化   解决冗余的问题
//	int x, y = 0;
//	printf("请输入两个整数操作数：");
//    scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
// }
//int main() {
//	int a = 0;
//	do {
//		menu();
//		printf("请选择： ");
//		scanf("%d", &a);
//		switch (a) {
//		case 1:
//			CaLc(Add);//这是把Add传给pf
//			break;
//		case 2:
//			CaLc(Sub);
//			break;
//		case 3:
//			CaLc(Mul);
//			break;
//		case 4:
//			CaLc(Div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//
//	} while (a);
//
//	return 0;
//}


//对上面的优化、、、、、、、、、、、、、、、、、、、、、、、、、、、
//int main() {
//	int a = 0;
//	int x = 0;
//	int y = 0;
//	//pfarr 是一个指针数组  转移表
//	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };//xor 异或
////  写5的原因    5个元素    对应位置  0   1  2   3   4
//	do {
//		menu();
//		printf("请选择： ");
//		scanf("%d", &a);
//		if (a >= 1 && a <= 4) {
//			printf("请输入两个整数操作数：");
//			scanf("%d%d", &x, &y);
//			//int ret = pfarr[a](x, y);
//			//printf("结果为%d\n", ret);
//			printf("结果为%d\n", pfarr[a](x, y));
//		}
//		else if (a == 0) {
//			printf("退出程序\n");
//			break;
//		}
//		else {
//			printf("选择错误\n");
//		}
//
//	} while (a);
//	return 0;
//}


//
//int main() {
//
//	int arr[10] = { 10 };
//	//&arr  取出数组的地址
//	int(*p)[10] = &arr;
//	int (*pfarr[4])(int, int);//pfarr是一个数组  函数指针的数组
//	int (*(*ppfarr)[4])(int, int) = &pfarr;//指向函数指针数组的指针
//	//ppfarr    是一个数组指针  指针指向的数组有4个元素
//	//指向的数组的每个元素类型是一个函数指针   int(*)(int ,int )
//	return 0;
//}



////回调函数  通过函数指针调用的函数
//void print( const char* srt) {
//	printf("Grace:%s\n", srt);
//}
//void test(void(*p)(const char*)) {
//	printf("test\n");
//		p("qianyu");
//}
//
//int main() {
//
//	test(print);//先进test q 在test里把qianyu传给print   通过char *接收
//
//	return 0;
//}




//冒泡排序   qsort  冒泡函数  可以排序任意类型的数据
//void my_pc(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz-1; i++) {//趟数
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++) {//对比的对数
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		
//	}
//}
//int main() {
//
//	int arr[10] = { 5,1,2,3,6,4,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//
//	my_pc(arr, sz);
//	int a = 0;
//	for (a = 0; a < 10; a++) {
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

//
//qsort 库函数 排序  quick sort  快速排序
void qsort(void* base, //有4个参数   void* 可以接收任意类型的指针  头文件 #include<stdlib.h>
	size_t num, 
	size_t width,
	int(* cmp)(const void* e1,const void* e2));//指针
//               比较

int cmp_int(const void* e1, const void* e2) {
	
	//比较两个数的大小
	
	if (*(float*)e1 == *(float*)e2) {//这是浮点形 所以不能和下面整形一样写法  不然会出错
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2) {
		return 1;
	}
	else
		return -1;

	//return ((int)(*(float*)e1 - *(float*)e2));//输出错误 强制转对接近的数不行



	//return *(int*)e1 - *(int*)e2;//要求1<2   返回-1  等于 返回0 大于 返回1
	//因为void 不能解引用  就不能找到地址 所以就强制转换成int*  再解引用 就可以了
}

//结构体
struct Stu {
	char name[20];
	int a = 0;
};

int cmp_stu_by_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->a - ((struct Stu*)e2)->a;
	//       强制转换  struct Stu 本身就是一个地址 所以不用解引用了 

	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
	//strcmp 比较两个字符串的大小  大于 返回1 小于返回-1  等于返回0  然后再由return 返回
}

void test() {
	struct Stu s[3] = { {"zhangshan",20},{"lisi",30},{"wangwu",5} };
	int sz = sizeof(s) / sizeof(s)[0];
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//qsort(s,               sz,         sizeof(s[0]),         cmp_stu_by_age);
//  要比较的数的位置   里面元素个数       每个元素的大小        比较的条件
}
int main() {
	/*int arr[10] = { 5,1,2,3,6,4,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);*/

	//float arr[] = { 5.2,1.3,2.8,3.9,6.4,4.4,7.2,8.8,9.4 ,1.5};
	//int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr)[0],cmp_int );
	//qsort(arr,     sz,      sizeof(arr)[0],        cmp_int);
	//     arr     元素个数    每个元素的大小    比较2个元素的方式
	//int a = 0;
	//	for (a = 0; a < 10; a++) {
	//		printf("%f ", arr[a]);
	//	}

	test();


	return 0;
}







//int main() {
//
//	//int a = 20;
//	//int* pa = &a;
//	////char* pc =(char*)&a;//强制转换 需要带*
//	//char ch = 'w';
//	//void* p = &a;
//	////void*类型指针 可以接收任意类型的地址
//	//p = &ch;
//
//	int b = 10;
//	void* pa = &b;
//	*pa = 0;//void 类型的指针 不能进行解引用的操作  不能进行加减运算 因为不能确定类型   
//
//
//	return 0;
//}