#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//������
//void menu() {
//	printf("      1  �ӷ�      \n");
//	printf("      2  ����      \n");
//	printf("      3  �˷�      \n");
//	printf("      4  ����      \n");
//	printf("      0  �˳�      \n");
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
//	  printf("��ѡ�� ");
//	  scanf("%d", &a);
//	  switch (a) {
//	  case 1:
//		  printf("����������������������");
//		  scanf("%d%d", &x, &y);
//		 printf("���Ϊ%d\n", Add(x,y));
//		  break;
//	  case 2:
//		  printf("����������������������");
//		  scanf("%d%d", &x, &y);
//		  printf("���Ϊ%d\n", Sub(x, y));
//		  break;
//	  case 3:
//		  printf("����������������������");
//		  scanf("%d%d", &x, &y);
//		  printf("���Ϊ%d\n", Mul(x, y));
//		  break;
//	  case 4:
//		  printf("����������������������");
//		  scanf("%d%d", &x, &y);
//		  printf("���Ϊ%d\n", Div(x, y));
//		  break;
//	  case 0:
//		  break;
//	  default:
//		  printf("�����������������\n");
//		  break;
//	  }
//
//
//	} while (a);
//
//	return 0;
//}


//void CaLc(int(*pf)(int, int)) {//��������Ż�   ������������
//	int x, y = 0;
//	printf("����������������������");
//    scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
// }
//int main() {
//	int a = 0;
//	do {
//		menu();
//		printf("��ѡ�� ");
//		scanf("%d", &a);
//		switch (a) {
//		case 1:
//			CaLc(Add);//���ǰ�Add����pf
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
//			printf("�����������������\n");
//			break;
//		}
//
//
//	} while (a);
//
//	return 0;
//}


//��������Ż�������������������������������������������������������
//int main() {
//	int a = 0;
//	int x = 0;
//	int y = 0;
//	//pfarr ��һ��ָ������  ת�Ʊ�
//	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };//xor ���
////  д5��ԭ��    5��Ԫ��    ��Ӧλ��  0   1  2   3   4
//	do {
//		menu();
//		printf("��ѡ�� ");
//		scanf("%d", &a);
//		if (a >= 1 && a <= 4) {
//			printf("����������������������");
//			scanf("%d%d", &x, &y);
//			//int ret = pfarr[a](x, y);
//			//printf("���Ϊ%d\n", ret);
//			printf("���Ϊ%d\n", pfarr[a](x, y));
//		}
//		else if (a == 0) {
//			printf("�˳�����\n");
//			break;
//		}
//		else {
//			printf("ѡ�����\n");
//		}
//
//	} while (a);
//	return 0;
//}


//
//int main() {
//
//	int arr[10] = { 10 };
//	//&arr  ȡ������ĵ�ַ
//	int(*p)[10] = &arr;
//	int (*pfarr[4])(int, int);//pfarr��һ������  ����ָ�������
//	int (*(*ppfarr)[4])(int, int) = &pfarr;//ָ����ָ�������ָ��
//	//ppfarr    ��һ������ָ��  ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ��������һ������ָ��   int(*)(int ,int )
//	return 0;
//}



////�ص�����  ͨ������ָ����õĺ���
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
//	test(print);//�Ƚ�test q ��test���qianyu����print   ͨ��char *����
//
//	return 0;
//}




//ð������   qsort  ð�ݺ���  ���������������͵�����
//void my_pc(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz-1; i++) {//����
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++) {//�ԱȵĶ���
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
//qsort �⺯�� ����  quick sort  ��������
void qsort(void* base, //��4������   void* ���Խ����������͵�ָ��  ͷ�ļ� #include<stdlib.h>
	size_t num, 
	size_t width,
	int(* cmp)(const void* e1,const void* e2));//ָ��
//               �Ƚ�

int cmp_int(const void* e1, const void* e2) {
	
	//�Ƚ��������Ĵ�С
	
	if (*(float*)e1 == *(float*)e2) {//���Ǹ����� ���Բ��ܺ���������һ��д��  ��Ȼ�����
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2) {
		return 1;
	}
	else
		return -1;

	//return ((int)(*(float*)e1 - *(float*)e2));//������� ǿ��ת�Խӽ���������



	//return *(int*)e1 - *(int*)e2;//Ҫ��1<2   ����-1  ���� ����0 ���� ����1
	//��Ϊvoid ���ܽ�����  �Ͳ����ҵ���ַ ���Ծ�ǿ��ת����int*  �ٽ����� �Ϳ�����
}

//�ṹ��
struct Stu {
	char name[20];
	int a = 0;
};

int cmp_stu_by_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->a - ((struct Stu*)e2)->a;
	//       ǿ��ת��  struct Stu �������һ����ַ ���Բ��ý������� 

	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
	//strcmp �Ƚ������ַ����Ĵ�С  ���� ����1 С�ڷ���-1  ���ڷ���0  Ȼ������return ����
}

void test() {
	struct Stu s[3] = { {"zhangshan",20},{"lisi",30},{"wangwu",5} };
	int sz = sizeof(s) / sizeof(s)[0];
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//qsort(s,               sz,         sizeof(s[0]),         cmp_stu_by_age);
//  Ҫ�Ƚϵ�����λ��   ����Ԫ�ظ���       ÿ��Ԫ�صĴ�С        �Ƚϵ�����
}
int main() {
	/*int arr[10] = { 5,1,2,3,6,4,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);*/

	//float arr[] = { 5.2,1.3,2.8,3.9,6.4,4.4,7.2,8.8,9.4 ,1.5};
	//int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr)[0],cmp_int );
	//qsort(arr,     sz,      sizeof(arr)[0],        cmp_int);
	//     arr     Ԫ�ظ���    ÿ��Ԫ�صĴ�С    �Ƚ�2��Ԫ�صķ�ʽ
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
//	////char* pc =(char*)&a;//ǿ��ת�� ��Ҫ��*
//	//char ch = 'w';
//	//void* p = &a;
//	////void*����ָ�� ���Խ����������͵ĵ�ַ
//	//p = &ch;
//
//	int b = 10;
//	void* pa = &b;
//	*pa = 0;//void ���͵�ָ�� ���ܽ��н����õĲ���  ���ܽ��мӼ����� ��Ϊ����ȷ������   
//
//
//	return 0;
//}