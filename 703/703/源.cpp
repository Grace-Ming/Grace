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
//	test1(arr);//4  ����ȥ����ָ�� ָ��Ĵ�С��4 ����8
//	test2(ch);//4  ����ȥ����ָ�� ָ��Ĵ�С��4 ����8
//	return 0;
//}



//
//int main() {
//
//	int a = 5;
//	int b = 3;
//	int c = a && b;
//	printf("%d\n", c);//���Ϊ1   ��һ��Ϊ0 ��Ϊ0 ����Ϊ0 ҲΪ0
//	int d = a || b;
//	printf("%d\n", d);//���Ϊ1  ֻ�е�2��Ϊ0 ��Ϊ0 
//
//	return 0;
//}


//
//int main() {
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//&&����Ϊ�� �����Ҫ�� Ϊ�پͷ���
//	//a��ʹ��Ϊ0 Ϊ��  0&&b &&���Ϊ�� ���Ժ���ľ�ֱ�Ӳ����� ��aʹ�ú�������� �����Ϊ1234
//     i = a++ || ++b || d++;//ֻҪǰ��Ϊ�� ��Ϊ���� ����Ϊ�� ����ͷ���
//	//a��ʹ��Ϊ0 Ϊ�� ��bΪ�� 0||b Ϊ�� Ϊ�� ����Ͳ��������� ��Ϊ1||0  ����Ϊ�� ����Ͳ������� ����1334
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
/////,���ű��ʽ �����ö��Ÿ����Ķ�����ʽ�����ű��ʽ������������ִ�У��������ʽ�Ľ���������һ�����ʽ�Ľ��
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//����13
//
//	if(a=b+1,c=a/2,d>0)// ʵ�������õ� ��d>0 ���Ϊ�� 
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
// ���ű��ʽ������ĸ�д  while(a=getva(),countca(a),a>0){}
//



//int main() {
//	//[] �±���ʲ����� ��2��������
//	int a[10] = { 0 };
//	a[4] = 10;
//
//
//	return 0;
//}

////
//int a = 10;
//int b = 20;
//()���ú���ʱ ���Ǻ������ò�����
//int max=get_max��a,b�� 3�������� max a b  ������û��������ʱ�� ���ǵ���max


////�ṹ�������
//struct Stu {//�ṹ������
//	char name[20];
//	int age;
//	char id[20];
//};
//int main() {
//
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1 ����ʼ��
//	struct Stu s1 = {"����",20,"20166435"};
//	struct Stu* ps = &s1;
//
//	//�ṹ��ָ��->��Ա��
//	printf("%s\n", (*ps).name);//zhang san 
//	printf("%d\n", ps->age);//20
//	printf("%s\n", ps->id);//20166435
//
//
//	printf("%s\n", s1.name);//zhang san 
//	printf("%d\n", s1.age);//20
//	printf("%s\n", s1.id);//20166435
//	//����  �ṹ�����.��Ա��
//	return 0;
//}



//int main() {        ///ֻҪ������ʽ���� �ͻᷢ����������  
//
//	char a = 3;
//	//0000000000000000000000000011
//	//00000011   char��һ���ֽ�  ��ض�  8������
//	char b = 127;
//	//0000000000000000000001111111
//	//01111111
//	char c = a + b;
//	//10000010
//	//1111111111111111111110000010  ����λ��
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
//	printf("%u\n", sizeof(+c));//4  +c �ͱ����һ����������
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