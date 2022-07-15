#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//旋转字符串
//暴力求解法
//void left_move(char* arr, int k) {
//	assert(arr != NULL);//断言 防止空指针
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++) {
//		//左旋转一个字符
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

//2  三步翻转法

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
	assert(arr != NULL);//断言 防止空指针
	int len = strlen(arr);
	assert(k <= len);//断言 防止大于字符串长度
	////////////////////////abcdef
	reverse(arr,arr+k-1); //逆序左边
	printf("%s\\n", arr);//bacdef
	printf("\n");
	reverse(arr+k,arr+len-1);//逆序右边
	printf("%s\\n", arr);//bafedc
	printf("\n");
	reverse(arr,arr+len-1);//逆序整体
	printf("%s\\n", arr);//cdefab
	printf("\n");
}
//strcat 追加  (str  str1 )  abcdefabcdef)  自己不能给自己追加 要找/0  自己追加自己得用strncat
//strstr    找子串的（str1，str2） if(ret==NULl)(return 0)else (return 1)
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
//杨氏矩阵

//int FinNum(int arr[3][3], int k,int row,int col) {
//	int x = 0;//行
//	int y = col - 1;//列
//	while (x<=col-1&&y>=0) {//防止越界
//		if (arr[x][y] > k) {//确定第一行最后一个元素下标位置
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
//	int ret = FinNum(arr, k, 3, 3);//33是行列
//	if (ret == 1) {
//		printf("找到了\n");
//	}
//	else {
//		printf("找不到\n");
//	}
//
//	return 0;
//}

int Finnum(int arr[3][3], int k, int* px, int* py) {
	int x = 0;//行
	int y = *py - 1;//列
	while (x<=*px-1&&y>=0) {//防止越界
		if (arr[x][y] > k) {//确定第一行最后一个元素下标位置
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			*px = x;//通过解引用  把xy的值 赋值给外面的xy
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
				printf("找到了\n");
				printf("下标是%d %d", x, y);
			}
			else {
				printf("找不到\n");
			}
	return 0;
}


