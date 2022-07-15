#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//��ת�ַ���
//������ⷨ
//void left_move(char* arr, int k) {
//	assert(arr != NULL);//���� ��ֹ��ָ��
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++) {
//		//����תһ���ַ�
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j <len-1 ; j++) {
//			//2
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//
//}
//
//int main() {
//	char arr[] = { "abcdef" };
//	left_move(arr, 2);
//	printf("%s\\n", arr);
//
//	return 0;
//}

//2  ������ת��

void reverse(char* left, char* right) {
	assert(left != NULL);
	assert(right != NULL);
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
		
	}
}
void left_move(char* arr, int k) {
	assert(arr != NULL);//���� ��ֹ��ָ��
	int len = strlen(arr);
	assert(k <= len);//���� ��ֹ�����ַ�������
	////////////////////////abcdef
	reverse(arr,arr+k-1); //�������
	printf("%s\\n", arr);//bacdef
	printf("\n");
	reverse(arr+k,arr+len-1);//�����ұ�
	printf("%s\\n", arr);//bafedc
	printf("\n");
	reverse(arr,arr+len-1);//��������
	printf("%s\\n", arr);//cdefab
	printf("\n");
}
//strcat ׷��  (str  str1 )  abcdefabcdef)  �Լ����ܸ��Լ�׷�� Ҫ��/0  �Լ�׷���Լ�����strncat
//strstr    ���Ӵ��ģ�str1��str2�� if(ret==NULl)(return 0)else (return 1)
int main() {
	char arr[] = { "abcdef" };
	printf("%s\\n", arr);
	printf("\n");
	left_move(arr, 1);
	

	return 0;
}


//  1  2  3      1  2  3
//  4  5  6      2  3  4
//  7  8  9      3  4  5
//���Ͼ���

//int FinNum(int arr[3][3], int k,int row,int col) {
//	int x = 0;//��
//	int y = col - 1;//��
//	while (x<=col-1&&y>=0) {//��ֹԽ��
//		if (arr[x][y] > k) {//ȷ����һ�����һ��Ԫ���±�λ��
//			y--;
//		}
//		else if (arr[x][y] < k) {
//			x++;
//		}
//		else {
//			return 1;
//		}
//
//	}
//	return 0;
//}
//int main() {
//
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FinNum(arr, k, 3, 3);//33������
//	if (ret == 1) {
//		printf("�ҵ���\n");
//	}
//	else {
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

int Finnum(int arr[3][3], int k, int* px, int* py) {
	int x = 0;//��
	int y = *py - 1;//��
	while (x<=*px-1&&y>=0) {//��ֹԽ��
		if (arr[x][y] > k) {//ȷ����һ�����һ��Ԫ���±�λ��
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			*px = x;//ͨ��������  ��xy��ֵ ��ֵ�������xy
			*py = y;
			return 1;
		}

	}
	return 0;
}

int main() {

	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = Finnum(arr, k, &x, &y);
	if (ret == 1) {
				printf("�ҵ���\n");
				printf("�±���%d %d", x, y);
			}
			else {
				printf("�Ҳ���\n");
			}
	return 0;
}


