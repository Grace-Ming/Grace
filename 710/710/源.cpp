#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
//void test(int* arr) {}            // 指针
//void test(int arr[]) {}// 这3个都行  数组
//void test(int arr[10]) {}      //数组
//
//
//void rest1(int *arr) {}  //数组传参
//void rest1(int* *arr) {}//和上面是一个的  指针 
//
//int main() {
//
//
//	int arr[10] = { 0 };//数组
//	int* arr1[20] = { 0 };//指针数组
//	test(arr);
//	rest1(arr1);
//
//	return 0;
//} 


//void test(int arr[3][5]){}
//void test(int arr[][5]) {}//行可以省  列不行

//void rest(int(*arr)[5]) {}
//int main() {
//
//	int arr[3][5] = { 0 };
//
//	//test(arr);//2维数组传参 必须要有列  
//	rest(arr);
//
//	return 0;
//}



//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//
//	return 0;
//}





//
//void test1(int* p){}
//int main() {
//
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//OK
//	test1(p1);//OK
//	return 0;
//}
//void test1(int** p){}
//int main() {
//
//	int a = 10;
// int*p=&a;
//	int** p1 = &p;//取出来就成2级指针了
//	test1(p1);//OK
//	test1(&p);//OK
//	return 0;
//} 
//2级指针   能接收2级指针本身 取一级指针的地址  还能接收一级指针数组的数组名


                                       //  数组指针  指向数组的指针
///////////////////////////////////////、、函数指针  指向函数的指针
//int Add(int x, int y) {
//
//    return x + y;
//}
//
//int main() {
//
// //   int a = 10;
// //   int b = 20;
// ///*   printf("%d\n", Add(a, b));
// //   printf("%p\n", &Add)*/;//函数取地址和函数名都是函数的地址 和数组是不一样的 没首元素
// //   printf("%p\n", Add);
//    int (* pa)(int,int) = Add;//函数取地址的方法
//    printf("%d\n", (*pa)(2,5));//7
//
//    return 0;
//}



//void print(const char*sr) {
//    printf("%s\n", sr);
//}
//
//int main() {
//
//    //char arr[] = "Grace";//字符串得用数组保存
//    void (*p)(const char*) =print;// 无返回类型 所以用void     因为Grass是常量  所以要路口const
//      (*p)("Grace");
//
//    return 0;
//}



//(*(void(*)())0)();
//    (*          (    void(*)()        ）0)                                 ()
//解引用找地址         函数指针类型    强制转换函数指针void(*)()类型       调用     //调用0地址处的该函数

//void(*signal(int,void(*)(int)))(int);
// signal 是个函数声明
// signal  函数的参数有2个  第一个是int 第二个是函数指针 该函数指针指向的函数参数是int 返回类型是void
// signal 函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int  返回类型是void 
//   void(         *signal(    int,                void(*)(int)))                  (int);
//  返回类型        函数声明                        函数指针类型                     调用
//void(*          | signal(int， void(*)(int))|去掉就是下面的写法             )(int);

//typedef void(*pfun_t)(int);//对上面的优化写法 重命名  和下面是一起的
//pfun_t |signal(int,pfun_t)|;

//typedef unsigned int uint  函数重命名和平常是不一样的




//int Add(int x, int y) {
//
//    return x + y;
//}
//
//int main() {
//
//   int a = 10;
//   int b = 20;
//    int (* pa)(int,int) = Add;//函数取地址的方法   函数名本身就是地址
//   
//    printf("%d\n", pa(2,5));//7
//    
//    printf("%d\n", Add(2, 5));//7
//    
//    printf("%d\n", (*pa)(2, 5));//7
//    //printf("%d\n", *pa(2, 5));//错误的  因为（）比*号优先级别高  会先和（）先结合 在解引用就会违法间接访问
//    return 0;
//}



//int Add(int x, int y) {
//
    return x + y;
}

int Sub(int x, int y) {
    
    return x - y;
}
int Mul(int x, int y) {

    return x * y;
}
int Div(int x, int y) {
    
    return x / y;
}
int main() {

    int* arr[5];
    int (*pa)(int, int) = Add;//上面的都存起来 就需要一个数组 存放函数指针的数组

    int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//parr 先和【】结合  就成数组 然后在和*结合 就成存放指针的数组
    int i = 0;
    for (i = 0; i < 4; i++) {
        printf("%d\n", parr[i](8, 4));
    }


    return 0;
}


//
//char* my_strcpy(char* dest, const char* src);
//
//int main() {
//    char* arr[4];
//    char* (*pf)(char*, const char*) = my_strcpy;
//    //存放上面指针的数组
//    char*(*pfarr[4])(char*, const char*);
//
//    return 0;
//}