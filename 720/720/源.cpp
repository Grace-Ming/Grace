#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct S {
//	int a;
//	char c;
//};
//
//void Init(struct S* ps) {//�ṹ��ָ�봫�εķ�ʽ   ��ַ
//	ps->a = 100;
//	ps->c = 'w';
//}
//
//void Print(struct S pa) {//��ӡ�ķ�ʽ  ��ӡ����Ҫ�ı�����  �Ͳ���Ҫָ����ʽ  ��ֵ  ����ʹ�ô�ַ  ��ֵ���ѹե�ڴ�Ŀ��� ��Ч�ʱ��
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



//λ�Ρ�������λ��������Ϊ�˽�ʡ�ռ䡢����������������������������������������
//�ṹ��ʵ��λ�ε�����  λ�εĳ�Ա������ ����  int  unsigned int ��signed int ����
//λ�εĳ�Ա��������һ��ð�ź�һ������  �������ֲ��ܴ���32
//λ�εĿռ��ǰ���4���ֽڻ���1�ֽڵ������ٿռ��  char �������μ���

//struct A {
//	int _a: 2;//��ð�ź���ָ���Ǳ���λ  a ֻ��Ҫ2������λ
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


//  ö��  ��һ������    ��������������������������������������������
//enum Day {//ö������
//	//ö�ٵĿ���ȡֵ  ö�ٳ���
//	MALE,//0  Ĭ��0��ʼ  ���ε���1
//	FEMALE,//1
//	SECRET,//2
//
//};
//enum Color {
//	RED=2,//Ҳ�����Լ���ֵ��ʼֵ  ��֮��Ͳ��ܸ��� �������ɸ�
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


//union ����  ������ ������  �ص��������Ͷ���ı�������һϵ�г�Ա  ��������Щ��Ա����ͬһ��ռ�
//��С����������Ա�Ĵ�С  ���߲���ͬʱ�� ͬһʱ�� ֻ��������һ��
//union Un {//���廹��4
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
//}��

int checksys() {//�ж�С�˴��

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
		printf("С��");
	}
	else
		printf("���");

	return 0;
}