#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d, \n", *(a + 1), *(ptr - 1), );
//	//     2    5       ��Ϊȡ��ַa ��������������  ��ǿ��ת��int����  ptr�Ǻ��������һԪ��  �ٽ�Ӧ�ü�1 ����5��
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
////����p��ֵΪ0x100000  ���±��ʽ��ֵ�ֱ�Ϊ����
////��֪ �ṹ��test���͵ı�����С��20���ֽ�
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
//	                        //16����
//	int a[4] = { 1,2,3,4 };//01 00 00 00   02 00 00 00   03 00 00 00  04 00 00 00
//	int* prt1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", prt1[-1], *ptr2);// 4 2000000 200000�ǵ�ַǿ��ת����
//	                                  //02 00 00 00
//	return 0;
//}



//int main() {
//	//  ���ű��ʽ   1      3     5          ���ű��ʽ�Ժ����Ϊ׼   ����Ӧ���ô����ŵ�
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];//��ֵ����Ҫ*
//	printf("%d\n", p[0]);//1   
//
//
//	return 0;
//}


int main() {

	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = (int*)(&aa + 1);//��������������
	int* p2 = (int*)(*(aa + 1));
	//                 aa+1 �ȼ�aa[1] ���ڶ���
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



