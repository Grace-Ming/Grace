#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main() {
//	//����ǰ3��֮��
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//3 33 333 3333 33333
//	for (i = 0; i < n; i++) {
//
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//#include<math.h>
////��ӡ1-10000��������
//int main() {
//	int i = 0;
//	for (i = 0; i < 10000; i++) {
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//����I��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10) {
//			n++;
//		}
//		//����I��ÿһλ��N��Ԫ֮��  sum
//		tmp = i;
//		while (tmp) {
//			sum += pow(tmp % 10, n);//pow  ��η�  POW��double����  ��û�����ǿ��ת��int
//			tmp /= 10;
//		}
//			//�Ƚ�i==sum
//		if (i == sum) {
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//��ӡ����////////////////////
//int main() {
//
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++) {
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++) {
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (j = 0; j < 2*i+1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++) {
//		int j = 0;
//		for (j = 0; j <=i ; j++) {
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (j = 0; j <2*(line-1-i)-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}


//����ˮ 1ƿ1�� 2��ƿ��1ƿ
//int main(){
//
//	int money = 0;//Ǯ
//	int total = 0;//��ƿ
//	int empty = 0;//��������
//	scanf("%d", money);
//
//	/*if (money == 0)
//		total = 0;              //����һ���㷨
//	else
//		total = 2 * money - 1;*/
//
//	total = money;
//	empty = money;
//	while (empty >= 2) {
//		total += empty /= 2;
//		empty = empty / 2 + empty % 2;//�������µ�����ƿ��
//	}
//
//	printf("total=%d\n", total);
//
//	return 0;
//}



//����ż������
//void print(int arr[], int sz) {
//	int a = 0;
//	for (a = 0; a < sz; a++) {
//		printf("%d  ", arr[a]);
//	}
//}
//
void move(int* arr, int sz) {

	int left = 0;
	int right = sz - 1;//��һ����Ϊ�±��Ǵ�0��ʼ��   sz��1��ʼ���
	while(left<right) {
		while ((left < right) && (arr[left] % 2 == 1)) {//����ʼ��
		//      ��ֹȫ������ɵ�Խ�����
			left++;
		}
		//���ұ߿�ʼ��
		while((left<right)&&(arr[right] % 2 == 0)) {
			right--;
		}
		if (left < right) {
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main() {

	int arr[] = { 1,3,5,4,7,6,2,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	move(arr, sz);
	print(arr, sz);

	return 0;
}



int main() {
	//������
	int a = 0;//b 2  a 3
	int b = 0;//b 2  e 4
	int c = 0;//c 1  d 2
	int d = 0;//c 5  d 3
	int e = 0;//e 4  a 1
	for(a=1;a<=5;a++){
	
		for (b = 1; b <= 5; b++) {

			for (c = 1; c <= 5; c++) {

				for (d = 1; d <= 5; d++) {

					for (e = 1; e <= 5; e++) {
						if (((b==2) + (a==3) == 1) &&
							((b==2) + (e==4) == 1) &&
							((c==1) + (d==2) == 1) &&
							((c==5) + (d==3) == 1) &&
							((e==4) + (a==1) == 1)) {
							if (a * b * c * d * e == 120) {//��������
								printf("a=%d  b=%d  c=%d  d=%d  e=%d\n", a, b, c, d, e);
							}
							}
						
						
					}
				}
			}
		}
	}

	return 0;
}



int main() {

	//����ռ�
	int* p = (int*)malloc(10 * sizeof(int));//ͷ�ļ� stdilib.h
	//ʹ�ÿռ�
	//��������
	//�ͷſռ�
	free(p);//�������ָ����Ϊ�� 
	p = NULL;//Ҫ�Լ���Ϊ��

	return 0;
}