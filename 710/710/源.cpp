#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
//void test(int* arr) {}            // ָ��
//void test(int arr[]) {}// ��3������  ����
//void test(int arr[10]) {}      //����
//
//
//void rest1(int *arr) {}  //���鴫��
//void rest1(int* *arr) {}//��������һ����  ָ�� 
//
//int main() {
//
//
//	int arr[10] = { 0 };//����
//	int* arr1[20] = { 0 };//ָ������
//	test(arr);
//	rest1(arr1);
//
//	return 0;
//} 


//void test(int arr[3][5]){}
//void test(int arr[][5]) {}//�п���ʡ  �в���

//void rest(int(*arr)[5]) {}
//int main() {
//
//	int arr[3][5] = { 0 };
//
//	//test(arr);//2ά���鴫�� ����Ҫ����  
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
//	int** p1 = &p;//ȡ�����ͳ�2��ָ����
//	test1(p1);//OK
//	test1(&p);//OK
//	return 0;
//} 
//2��ָ��   �ܽ���2��ָ�뱾�� ȡһ��ָ��ĵ�ַ  ���ܽ���һ��ָ�������������


                                       //  ����ָ��  ָ�������ָ��
///////////////////////////////////////��������ָ��  ָ������ָ��
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
// //   printf("%p\n", &Add)*/;//����ȡ��ַ�ͺ��������Ǻ����ĵ�ַ �������ǲ�һ���� û��Ԫ��
// //   printf("%p\n", Add);
//    int (* pa)(int,int) = Add;//����ȡ��ַ�ķ���
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
//    //char arr[] = "Grace";//�ַ����������鱣��
//    void (*p)(const char*) =print;// �޷������� ������void     ��ΪGrass�ǳ���  ����Ҫ·��const
//      (*p)("Grace");
//
//    return 0;
//}



//(*(void(*)())0)();
//    (*          (    void(*)()        ��0)                                 ()
//�������ҵ�ַ         ����ָ������    ǿ��ת������ָ��void(*)()����       ����     //����0��ַ���ĸú���

//void(*signal(int,void(*)(int)))(int);
// signal �Ǹ���������
// signal  �����Ĳ�����2��  ��һ����int �ڶ����Ǻ���ָ�� �ú���ָ��ָ��ĺ���������int ����������void
// signal �����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int  ����������void 
//   void(         *signal(    int,                void(*)(int)))                  (int);
//  ��������        ��������                        ����ָ������                     ����
//void(*          | signal(int�� void(*)(int))|ȥ�����������д��             )(int);

//typedef void(*pfun_t)(int);//��������Ż�д�� ������  ��������һ���
//pfun_t |signal(int,pfun_t)|;

//typedef unsigned int uint  ������������ƽ���ǲ�һ����




//int Add(int x, int y) {
//
//    return x + y;
//}
//
//int main() {
//
//   int a = 10;
//   int b = 20;
//    int (* pa)(int,int) = Add;//����ȡ��ַ�ķ���   ������������ǵ�ַ
//   
//    printf("%d\n", pa(2,5));//7
//    
//    printf("%d\n", Add(2, 5));//7
//    
//    printf("%d\n", (*pa)(2, 5));//7
//    //printf("%d\n", *pa(2, 5));//�����  ��Ϊ������*�����ȼ����  ���Ⱥͣ����Ƚ�� �ڽ����þͻ�Υ����ӷ���
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
    int (*pa)(int, int) = Add;//����Ķ������� ����Ҫһ������ ��ź���ָ�������

    int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//parr �Ⱥ͡������  �ͳ����� Ȼ���ں�*��� �ͳɴ��ָ�������
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
//    //�������ָ�������
//    char*(*pfarr[4])(char*, const char*);
//
//    return 0;
//}