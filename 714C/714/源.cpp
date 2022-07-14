#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main() {
//	//计算前3项之和
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
////打印1-10000的自幂数
//int main() {
//	int i = 0;
//	for (i = 0; i < 10000; i++) {
//		//判断i是否为水仙花数（自幂数）
//		//计算I的位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10) {
//			n++;
//		}
//		//计算I的每一位的N次元之和  sum
//		tmp = i;
//		while (tmp) {
//			sum += pow(tmp % 10, n);//pow  求次方  POW是double类型  想没警告就强制转换int
//			tmp /= 10;
//		}
//			//比较i==sum
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
//打印菱形////////////////////
//int main() {
//
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++) {
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++) {
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j < 2*i+1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++) {
//		int j = 0;
//		for (j = 0; j <=i ; j++) {
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j <2*(line-1-i)-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}


//喝汽水 1瓶1快 2空瓶换1瓶
//int main(){
//
//	int money = 0;//钱
//	int total = 0;//空瓶
//	int empty = 0;//换回来的
//	scanf("%d", money);
//
//	/*if (money == 0)
//		total = 0;              //另外一种算法
//	else
//		total = 2 * money - 1;*/
//
//	total = money;
//	empty = money;
//	while (empty >= 2) {
//		total += empty /= 2;
//		empty = empty / 2 + empty % 2;//奇数留下的来的瓶子
//	}
//
//	printf("total=%d\n", total);
//
//	return 0;
//}



//按奇偶数排序
//void print(int arr[], int sz) {
//	int a = 0;
//	for (a = 0; a < sz; a++) {
//		printf("%d  ", arr[a]);
//	}
//}
//
void move(int* arr, int sz) {

	int left = 0;
	int right = sz - 1;//减一是因为下标是从0开始的   sz是1开始算的
	while(left<right) {
		while ((left < right) && (arr[left] % 2 == 1)) {//从左开始找
		//      防止全奇数造成的越界访问
			left++;
		}
		//从右边开始找
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
	//猜名次
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
							if (a * b * c * d * e == 120) {//过滤条件
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

	//申请空间
	int* p = (int*)malloc(10 * sizeof(int));//头文件 stdilib.h
	//使用空间
	//、、（）
	//释放空间
	free(p);//并不会把指针置为空 
	p = NULL;//要自己置为空

	return 0;
}